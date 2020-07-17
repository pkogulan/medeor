#include<SoftwareSerial.h>
#define TxD 0
#define RxD 1
int inPin = A0;
SoftwareSerial bluetoothSerial(TxD, RxD);

char c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(inPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    c = Serial.read();
    Serial.println(c);
  }
  float val = analogRead(inPin);
  Serial.println(val);
}
