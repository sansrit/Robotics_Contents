int ledPin = 13; 
int statea = 0;
int flag = 0; 
 
void setup() {
 pinMode(ledPin, OUTPUT);
 digitalWrite(ledPin, LOW);
 
 Serial.begin(9600); // Default connection rate for my BT module
}
 
void loop() {

 if(Serial.available() > 0){
 statea = Serial.read();
 }


  if(statea == '2'){
    forward();
  }
  else if (statea == '3'){
     backward();
  }
  
  
 else{
  stopa();
 }

}


void forward(){
   Serial.println(" forward is pressed");
   digitalWrite(13,HIGH);
}

void backward(){
   Serial.println("  backward is pressed");
}



void stopa(){
   Serial.println(" stop is pressed");
   digitalWrite(13,LOW);
}
