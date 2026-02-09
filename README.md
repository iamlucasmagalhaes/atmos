<div align="center">

  <img src="assets/Atmos.png" width="400" alt="Atmos Logo">
  
  <br><br>

  <img src="https://img.shields.io/badge/Status-Em_Desenvolvimento-yellow" alt="Status">
  <img src="https://img.shields.io/badge/Hardware-ESP32-red" alt="ESP32">
  <img src="https://img.shields.io/badge/Linguagem-C++-blue" alt="C++">
  <img src="https://img.shields.io/badge/Licença-MIT-green" alt="Licença">

</div>

## Sobre o Atmos
O **Atmos** é uma solução de monitoramento IoT com uma arquitetura modular e resiliente. Acreditamos que o desenvolvimento de sistemas embarcados deve ser escalável, confiável e livre da complexidade excessiva. O Atmos abstrai as dificuldades comuns de projetos de hardware, permitindo que você foque na inteligência dos dados.

O Atmos facilita tarefas críticas usadas em aplicações modernas de IoT, como:

- Comunicação robusta device-to-backend via MQTT com reconexão automática.
- Processamento inteligente na borda (Edge Computing) com filtragem de ruído.
- Execução de decisões locais em tempo real com latência zero.
- Telemetria otimizada com payloads JSON compactos.
- Integração fluida com APIs REST para dados históricos.
- Transmissão de dados em tempo real via WebSockets.
- Logs detalhados de execução e erro para depuração simplificada.

O Atmos é acessível para prototipagem rápida, mas poderoso o suficiente para sustentar aplicações de monitoramento contínuo em produção.

## Utilizando o Atmos

O Atmos foi projetado para ser intuitivo. Embora a documentação completa esteja sendo construída, o sistema já fornece interfaces claras para integração imediata.

### API Endpoints
Para desenvolvedores que desejam consumir os dados históricos, o sistema disponibiliza uma API REST expressiva e simples:

- `GET /api/leituras` — Recupera o histórico completo.
- `GET /api/leituras?limit=20` — Recupera as leituras mais recentes.

Se você não quer apenas ler documentação, pode explorar o código fonte para ver como implementamos a filtragem de média móvel no ESP32 e a arquitetura de eventos no backend.


