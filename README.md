Projeto de IoT, utilizando MQTT - Mackenzie - Jeane Lira Dias
 <br>
  <br>
   <br>
Este projeto utiliza uma base Arduino com sensor MQ135 e Rele de acionamento. <br>
Neste repositório serão encontrados os arquivos referentes ao projeto:  <br>
teste_Sensores.ino.ino > Aqui foram feitos os testes diretamente na placa, do sensor MQ135 e do acionamento do relé.   <br>
Este código deve ser substituido pelo projeto StandardFirmata para funcionar corretamente.  <br>
flows.json > Este pode ser importado no Node-red para funcionamento completo.  <br>
SKETCH PURIFICADOR.fzz > Esquema eletrico completo para reprodução do projeto.  <br>
 <br>
  <br>
- Instalação Node-red e componentes <br>
  •	npm install -g –unsafe-perm node-red <br>
  •	npm i --unsafe-perm serialport <br>
  •	npm i --unsafe-perm node-red-node-arduino <br>
  •	npm i --unsafe-perm node-red-dashboard <br>
   <br>
 <br>
Interfaces/Protocolos/Modulos <br>
Firmata > https://www.arduino.cc/reference/en/libraries/firmata/  <br>
MQTT > https://mqtt.org/  <br>
SerialPort > https://serialport.io/  <br> 
NodeRed > https://nodered.org/  <br>
MQ135 > https://www.robocore.net/sensor-gas/modulo-sensor-de-gases-toxicos-mq-135  <br>
Arduino > https://docs.arduino.cc/hardware/uno-rev3/  <br>
