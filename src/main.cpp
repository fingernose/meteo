#include <Arduino.h>
#include "header.h"
#include "wifi.h"
#include "TempHum.h"
#include "DS3231.h"
#include "PhotoCell.h"
#include "ArdJson.h"


const char* mqtt_server = "172.16.0.4";
const char* mqtt_username = "";
const char* mqtt_password = "";
const char* clientID = "esp8266";
WiFiClient wifiClient;
PubSubClient client(mqtt_server, 1883, wifiClient); 



void setup() {
  pinMode(led,OUTPUT);
   Serial.begin(9600);
   Serial.println("lancement du WiFi");
  //Reseau();
  MultiReseau();


  dht.setup(13, DHTesp::DHT22);
  DateTime();
  Wire.begin();
  Rtc.Begin();

  DateTime();
   
}




void loop() {
  GetTempHum();
  delay(500);
  TempsDetail();
  CellReading();
  delay(500);
  JsonCode();
  
 if (client.connect(clientID, mqtt_username, mqtt_password)) {
    Serial.println("Connected to MQTT Broker!");
  }
  else {
    Serial.println("Connection to MQTT Broker failed...");
  }
  client.publish("test",buffer);
  Serial.println(buffer);
  delay(300000);
 }