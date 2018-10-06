#include <WiFi.h>
#include <WiFiClient.h>



const char* ssid     = "j_ram";
const char* password = "jayaraman00";

WiFiServer server(26);
WiFiClient client;
void setup()
{
    Serial.begin(115200);

    delay(10);

    connectWiFi();
    
    server.begin();

}


void loop(){
 client = server.available();   // listen for incoming clients

  if (client) {                             // if you get a client,
    Serial.println("New Client.");           // print a message out the serial port
    while (client.connected()) {            // loop while the client's connected
     Serial.println("Connected");
     client.println("Ready to go");
    }
  }
}
void connectWiFi(void)
{
  // We start by connecting to a WiFi network

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
  
  }
