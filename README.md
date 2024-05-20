Projeto de IoT, utilizando MQTT - Mackenzie - Jeane Lira Dias

Este projeto utiliza uma base Arduino com sensor MQ135 e Rele de acionamento.
Neste repositório serão encontrados os arquivos referentes ao projeto:
teste_Sensores.ino.ino > Aqui foram feitos os testes diretamente na placa, do sensor MQ135 e do acionamento do relé. 
Este código deve ser substituido pelo projeto StandardFirmata para funcionar corretamente.
flows.json > Este pode ser importado no Node-red para funcionamento completo.
SKETCH PURIFICADOR.fzz > Esquema eletrico completo para reprodução do projeto.

- Instalação Node-red e componentes
  •	npm install -g –unsafe-perm node-red
  •	npm i --unsafe-perm serialport
  •	npm i --unsafe-perm node-red-node-arduino
  •	npm i --unsafe-perm node-red-dashboard

Interfaces/Protocolos/Modulos
Firmata > https://www.arduino.cc/reference/en/libraries/firmata/
MQTT > https://mqtt.org/
SerialPort > https://serialport.io/
NodeRed > https://nodered.org/
MQ135 > https://www.robocore.net/sensor-gas/modulo-sensor-de-gases-toxicos-mq-135
Arduino > https://docs.arduino.cc/hardware/uno-rev3/
