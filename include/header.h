
#include <DHTesp.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ArduinoJson.h>
#include <PubSubClient.h>
#include <Wire.h>
#include <RtcDS3231.h>
#include <ESP8266WiFiMulti.h>
/*
#include <MemoryFree.h>
#include <WiFiClient.h>
#include <ESP8266mDNS.h>
#include <EEPROM.h>
*/

#define DHTTYPE DHT22
#define DHTPIN 7
#define DS3231_I2C_ADDRESS 0x68


/*
ESP8266WebServer server(80);
MDNSResponder mdns;
*/

String MQ135;