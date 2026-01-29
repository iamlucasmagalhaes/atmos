# 🚀 [Therma32]

![Status do Projeto](https://img.shields.io/badge/Status-Em_Desenvolvimento-yellow)
## 📝 Descrição
[Escreva aqui um breve resumo do que o projeto faz. Exemplo: Um sistema de monitoramento de temperatura e umidade via WiFi usando ESP32 e MQTT.]

## ✨ Funcionalidades
* [Funcionalidade 1: Ex: Leitura de sensores em tempo real]
* [Funcionalidade 2: Ex: Conexão automática ao WiFi]
* [Funcionalidade 3: Ex: Painel de controle Web]

## 🛠️ Hardware Necessário
* 1x Placa de Desenvolvimento ESP32 (Ex: ESP32 DOIT DEVKIT V1)
* [Sensor 1: Ex: DHT11 ou DHT22]
* [Outros componentes: Ex: Relé 5V, LEDs, Resistores]
* Jumpers e Protoboard
* Cabo Micro-USB

## 🔌 Esquema de Ligação (Pinout)

| Componente | Pino do Componente | Pino do ESP32 (GPIO) |
| :--- | :--- | :--- |
| DHT22 | DATA | D4 (GPIO 4) |
| DHT22 | VCC | 3.3V |
| DHT22 | GND | GND |
| Relé | IN | D5 (GPIO 5) |

## 💻 Software e Bibliotecas
Este projeto foi desenvolvido utilizando a IDE [Arduino IDE / PlatformIO / ESP-IDF].

Bibliotecas necessárias (instale via Gerenciador de Bibliotecas):
* `WiFi.h` (Nativa)
* `PubSubClient` (para MQTT)
* `Adafruit Unified Sensor`
* `[Nome de outra biblioteca usada]`

## ⚙️ Configuração e Instalação

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/nome-do-projeto.git](https://github.com/seu-usuario/nome-do-projeto.git)
