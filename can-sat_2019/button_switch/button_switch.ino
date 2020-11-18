
int button = 7;
int led = 13;
int buttonState = LOW;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(7,INPUT);

}

void loop() {
  buttonState = digitalRead(7);
  Serial.println(buttonState);

//  if(buttonState == HIGH)
//    digitalWrite(13,HIGH);
//   else
//     digitalWrite(13,LOW);
   

  
}
