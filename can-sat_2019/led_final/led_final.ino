int button = 5;
int buttonstate;

void setup() {
  Serial.begin(9600);
  pinMode(5,INPUT);
  pinMode(7,OUTPUT);
  
}

void loop() {
  buttonstate = digitalRead(5);
  if(buttonstate == 1){
    delta1();
  
    
  } 
  else {
    digitalWrite(7,LOW);
  }
  Serial.println(buttonstate);

}
void delta1(){
  digitalWrite(7,HIGH);
  delay(150);
  digitalWrite(7,LOW);
  delay(30);
}
