#include <Arduino.h>

// Pin initialization 
int touchPin = 2;   // Touch sensor OUT pin
int ledPin = 13;    // LED pin
 
void setup() { 
   // write your initialization code here
   pinMode(touchPin, INPUT);
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
}

void loop() {
    // write your code here
    
    int touchState = digitalRead(touchPin);

    if (touchState == HIGH) {
          digitalWrite(ledPin, HIGH);  // LED ON
          Serial.println("Touched!");
    } else {
         digitalWrite(ledPin, LOW);   // LED OFF
         Serial.println("Not touched");
    }

  delay(100);

}
