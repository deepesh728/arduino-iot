int led=13;
int buzzer=12;

#include <WiFi.h>

const char* ssid     = "Nextstep";
const char* password = "nsds@2017";

const char* host = "192.168.0.8";

void setup()

{
  pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
    Serial.begin(115200);
    delay(10);

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
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

int value = 0;

void loop()
{
    delay(5000);
    ++value;

    Serial.print("connecting to ");
    Serial.println(host);
    
    WiFiClient client;
    const int httpPort = 23;
    if (!client.connect(host, httpPort)) {
        Serial.println("connection failed");
        return;
    }
    client.print(String("GET ") + " HTTP/1.1\r\n" +
                 "Host: " + host + "\r\n" +
                 "Connection: close\r\n\r\n");
    unsigned long timeout = millis();
    while (client.available() == 0) {
        if (millis() - timeout > 10000) {
            Serial.println(">>> Client Timeout !");
            client.stop();
            digitalWrite(buzzer,HIGH);
            delay(1000);
            digitalWrite(buzzer,LOW);
            
            return;
        }
    }

    
    while(client.available()) {
        String line = client.readStringUntil('\r');
        Serial.print(line);
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
    }

    Serial.println();
    Serial.println("closing connection");
    
}

