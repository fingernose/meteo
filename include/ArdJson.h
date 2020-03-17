  char buffer[512];
void JsonCode(){
// ArduinoJson Serializing
  const size_t capacity = JSON_OBJECT_SIZE(4);
  DynamicJsonDocument doc(capacity);
  doc["Temperature"] = temp;
  doc["Humidite"] = hum;
  doc["Luminosite"] = PhotoRead;
  doc["Date"] = Epoch;
  //doc["Time"] = __TIME__;

  serializeJson(doc, buffer);
  
 
}
 