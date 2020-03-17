/*
Fichier de Connection WiFi
2020-03-07
*/

const char* ssid = "masson";
const char* password = "M@s_D0mmier$";
ESP8266WiFiMulti multiWifi;
int led = 12;

void Reseau() {
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  digitalWrite(led, HIGH);
  }

  void MultiReseau() {
  multiWifi.addAP("masson", "M@s_D0mmier$"); 
  multiWifi.addAP("masson_2GEXT", "M@s_D0mmier$");
   multiWifi.addAP("eliane", "MarieLaverdure");
 // multiWifi.addAP("raz01", "R@z_D0mmier$");

  Serial.print("Connecting to WiFi network...");
  
  while (multiWifi.run() != WL_CONNECTED) {  //Wait for connection
    delay(1500);
    Serial.println("Waiting to connect...");
  }
  
  Serial.print("Connection established to");
  Serial.println(WiFi.SSID()); //Print conneccted WiFi SSID
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());  //Print the local IP
  digitalWrite(led, HIGH);

  }