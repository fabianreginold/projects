#include "DHT.h"
#define DHTPIN 5    // what digital pin we're connected to
#define DHTTYPE DHT11   // DHT 22  (AM2302), AM2321 
DHT dht(DHTPIN, DHTTYPE);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float temp, humi;
  humi = dht.readHumidity();
  temp = dht.readTemperature();
  Serial.print("temperature: "); 
  Serial.println(temp); 
  Serial.print("humidity: ");
  Serial.println(humi);
  delay(1000);
}

