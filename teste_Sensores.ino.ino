
#include "SoftwareSerial.h"

SoftwareSerial ESP_Serial(10, 11); // RX, TX

int sensorPin=A4;
int relePin=9;
int sensorData;
int releLigado = false;

void setup()
{  
  Serial.begin(9600);   
  ESP_Serial.begin(9600);

  pinMode(sensorPin,INPUT);     
  pinMode(relePin, OUTPUT);           
 }

void loop()
{
  sensorData = analogRead(sensorPin);       
  Serial.print("Air Quality:");
  Serial.print(sensorData, DEC);               
  Serial.println(" PPM");
  delay(500);

  if (ESP_Serial.available()){
    Serial.write(ESP_Serial.read());
  }
  if (Serial.available()){
    ESP_Serial.write(Serial.read());
  }      

  if (sensorData > 400 && !releLigado) {
    releLigado = true;
    digitalWrite(relePin, HIGH);
    Serial.println("ON");
  } else if (sensorData < 200 && releLigado) {
    releLigado = false;
    digitalWrite(relePin, LOW);
    Serial.println("OFF");
  }                            
}