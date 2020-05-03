#include "SomfyRTS.h"

SomfyRTS myRTS(4);

void setup() {
  Serial.begin(115200);

  
  Serial.println("Enter something in the terminal to pair your device");
  while (!Serial.available()){}
  
  Serial.println("Pairing...");
  myRTS.prog(2);
  Serial.println("Done");
  
}

void loop() {

myRTS.moveup(2);
delay(3000);
myRTS.movedown(2);
delay(3000);  

}
