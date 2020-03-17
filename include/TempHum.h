

float hum;
float temp;
DHTesp dht;

void GetTempHum(){
delay(dht.getMinimumSamplingPeriod());

 hum = dht.getHumidity();
 temp= dht.getTemperature();
 }