#include <Arduino.h>

int RED = D0;
int YELLOW = D1;
int GREEN = D2;

void setup() {
  // put your setup code here, to run once:
 pinMode(RED, OUTPUT);
 pinMode(YELLOW, OUTPUT);
 pinMode(GREEN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED, HIGH);
  delay(2000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(2000);
  digitalWrite(GREEN, LOW);
}


