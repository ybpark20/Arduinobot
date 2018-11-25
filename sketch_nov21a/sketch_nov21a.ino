#include <dht.h>


dht DHT;
#define DHT11_PIN 7


void setup(){

  Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:

  int chk=DHT.read11(DHT11_PIN);
  float h = DHT.humidity;
  float t = DHT.temperature;
  String message="";
  if (isnan(h)|| isnan(t)){
    return;
  }
  message=message+"{\"humidity\":";
  message=message+h;
  message=message+",\"temperature\":";
  message=message+t;
  message=message+"}";
  Serial.println(message);

 delay(5000);
 
}
