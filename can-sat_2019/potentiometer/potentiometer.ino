int ledPin = 13;
int potPin = A0;


void setup() {
  Serial.begin(9600);

}

void loop() {
  int potPinValue = analogRead(potPin);

  int mappedValue = map(potPinValue,0,1023,0,255);
  
  
  Serial.print("potentiometer value = ");
  Serial.print(potPinValue);
  Serial.print(".....");
  Serial.print("mapped value = ");
  Serial.print(mappedValue);

  analogWrite(ledPin,mappedValue);
  delay(1);

  delay(1000);

}
