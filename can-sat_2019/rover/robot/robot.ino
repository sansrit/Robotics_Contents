const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;

int received  = 0;

//const int ENA = 5;
//const int ENB = 6;



void setup() {
  Serial.begin(9600);

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

  //Controlling pulse witdth modulations.
  
 // pinMode (ENA, OUTPUT);
 // pinMode (ENB, OUTPUT);

  //analogWrite(ENA, 255);
 // analogWrite(ENB, 255); 
 
   
}

void loop() {
  if(Serial.available()>0){
  received = Serial.read();
  }



  if(received == '1'){
    Serial.println("forward");
        // forward();
                    digitalWrite(IN1, LOW);
                    digitalWrite(IN2, HIGH);    //left clockwise
                    digitalWrite(IN3, LOW);
                    digitalWrite(IN4, HIGH);
  }
  else if (received == '2'){
      backward();
  }
  else if(received == '3'){
    left();
  }
  else if (received == '4'){
    right();
  }
  else if(received == '5'){
    grip_contrax();
  }

  else if(received == '6'){
    grip_relax();
  }

  else if(received == '7'){
    liftup();
  }
  else if(received == '8'){
    liftdown();
  }
  
  else{
    stopit();
  }

}

  void forward(){
                
  }

  void backward(){
    Serial.println("backward");
                      digitalWrite(IN1, HIGH);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, HIGH);
                      digitalWrite(IN4, LOW);
  }

  void left(){
    Serial.println("left");
                    digitalWrite(IN1, HIGH);
                    digitalWrite(IN2, HIGH);
                    digitalWrite(IN3, LOW);
                    digitalWrite(IN4, HIGH);
  }

  void right(){
    Serial.println("right");
                      digitalWrite(IN1, LOW);
                      digitalWrite(IN2, HIGH);
                      digitalWrite(IN3, LOW);
                      digitalWrite(IN4, LOW);
  }

  void liftup(){
    
  }

  void liftdown(){
    
  }

  void grip_contrax(){
    
  }

  void grip_relax(){
    
  }

  void stopit(){
    Serial.println("stop");
                        digitalWrite(IN1, LOW);
                        digitalWrite(IN2, LOW);
                        digitalWrite(IN3, LOW);
                        digitalWrite(IN4, LOW);
  }
