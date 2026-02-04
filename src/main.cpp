#include <WiFi.h>
#include <PubSubClient.h>
#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11
#define BUZZER_PIN 15

#define LIMITE_TEMPERATURA 30.0
#define NUM_AMOSTRAS 5

const char* ssid = "Bigode";
const char* password = "laismr1010";
const char* mqtt_server = "192.168.100.203";

WiFiClient espClient;
PubSubClient client(espClient);
DHT dht(DHTPIN, DHTTYPE);

// Buffer para média móvel
float bufferTemp[NUM_AMOSTRAS];
int indice = 0;
bool bufferCheio = false;

void conectarWiFi() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void conectarMQTT() {
  while (!client.connected()) {
    client.connect("ESP32_DHT11_EDGE");
    delay(2000);
  }
}

float calcularMedia() {
  float soma = 0;
  int total = bufferCheio ? NUM_AMOSTRAS : indice;

  for (int i = 0; i < total; i++) {
    soma += bufferTemp[i];
  }

  return soma / total;
}

void setup() {
  Serial.begin(115200);
  dht.begin();

  // Decisão local
  pinMode(BUZZER_PIN, OUTPUT);  
  digitalWrite(BUZZER_PIN, LOW);

  conectarWiFi();
  client.setServer(mqtt_server, 1883);
}

void loop() {
  if (!client.connected()) {
    conectarMQTT();
  }
  client.loop();

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(t) || isnan(h)) {
    delay(2000);
    return;
  }

  // Atualiza buffer da média móvel
  bufferTemp[indice++] = t;
  if (indice >= NUM_AMOSTRAS) {
    indice = 0;
    bufferCheio = true;
  }

  float tempMedia = calcularMedia();

  // Decisão local (Edge)
  bool alerta = tempMedia >= LIMITE_TEMPERATURA;

  if (alerta) {
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  char payload[128];
  snprintf(payload, sizeof(payload),
    "{\"temperatura\":%.1f,\"umidade\":%.1f,\"alerta\":%s}",
    tempMedia, h, alerta ? "true" : "false"
  );

  client.publish("lab/03/dht11", payload);
  Serial.println(payload);

  delay(3000);
}
