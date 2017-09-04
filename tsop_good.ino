#include <IRremoteESP8266.h>

int RECV_PIN = 5; //an IR detector/demodulatord is connected to GPIO pin D2

IRrecv irrecv(RECV_PIN);
decode_results results;

long lastMsg = 0;
char msg[50];
int value = 0;

void setup() {
  Serial.begin(115200);
  
  irrecv.enableIRIn(); // Start the receiver
}

void loop() 
{
  long now = millis();
  if (now - lastMsg > 2000) {
    lastMsg = now;

    if (irrecv.decode(&results))
    {
      Serial.println(results.value, HEX);
      irrecv.resume(); // Receive the next value
    
    }
  }
}
