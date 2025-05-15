#include <Arduino.h>

int trigPin = D0;
int echoPin = D1;
int led1 = D2;
int led2 = D3;

long duration;
long distance;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = 0.034 * duration / 2;

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");
  if (distance <= 10)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }
  else
  {
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
  }
  delay(1000);
}