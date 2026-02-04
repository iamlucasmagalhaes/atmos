<div align="center">

  <img src="assets/Atmos.png" width="400" alt="Atmos Logo">
  
  <br><br>

  <img src="https://img.shields.io/badge/Status-Em_Desenvolvimento-yellow" alt="Status">
  <img src="https://img.shields.io/badge/Hardware-ESP32-red" alt="ESP32">
  <img src="https://img.shields.io/badge/Linguagem-C++-blue" alt="C++">
  <img src="https://img.shields.io/badge/Licença-MIT-green" alt="Licença">

</div>

## Sobre o Atmos
O Atmos é uma solução de monitoramento IoT baseada em uma arquitetura modular, focada em processamento em Edge, comunicação em tempo real e fácil integração com aplicações web. O projeto foi concebido para tornar o desenvolvimento de sistemas IoT mais simples, confiável e escalável, reduzindo a complexidade comum em projetos embarcados.

O Atmos abstrai e automatiza diversas tarefas recorrentes em aplicações de monitoramento IoT, como:

- Comunicação confiável entre dispositivos IoT e backend utilizando MQTT, com tratamento de reconexão no backend.
- Processamento em Edge no ESP32, incluindo filtragem de ruído dos dados de temperatura por meio de média móvel.
- Execução de decisões locais em tempo real, como a ativação de alertas físicos baseados em limites configuráveis.
- Envio de telemetria em JSON compacto, otimizado para comunicação em tempo real.0
- Integração transparente com APIs REST para consulta de dados históricos.
- Disponibilização dos dados em tempo real via WebSockets, permitindo atualização imediata no frontend.
- Persistência das leituras em banco de dados relacional com registro temporal.
- Sistema de logs de execução e erro no backend, facilitando a depuração e o monitoramento da aplicação.

O Atmos é ideal para prototipagem rápida, mas também fornece uma base sólida para aplicações de monitoramento contínuo, permitindo evolução incremental do firmware, do backend e do frontend de forma independente.

## API Endpoints
O sistema disponibiliza uma API REST para consulta de histórico:
 - /api/leituras
 - /api/leituras?limit=20
