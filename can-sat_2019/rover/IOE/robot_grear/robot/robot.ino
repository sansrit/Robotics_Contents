const int IN1 = 4;
const int IN2 = 5;
const int IN3 = 6;
const int IN4 = 7;
 //motor driver pins for arms
//const int IN5 = 8;
//const int IN6 = 9;
//const int IN7 = 10;
//const int IN8 = 11;



//fast 1oo;
//slow 50;


int received  = 0;

const int ENA = 10;
const int ENB = 11;



void setup() {
  Serial.begin(9600);

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

  //Controlling pulse witdth modulations.
  
 pinMode (ENA, OUTPUT);
 pinMode (ENB, OUTPUT);

 
   
}

void loop() {
  if(Serial.available()>0){
  received = Serial.read();
  
  }



  if(received == '1'){
 analogWrite(ENA, 255);
 analogWrite(ENB, 255); 
 
    Serial.println("forward");
        // forward();
                    digitalWrite(IN1, LOW);
                    digitalWrite(IN2, HIGH);    //left clockwise
                    digitalWrite(IN3, LOW);
                    digitalWrite(IN4, HIGH);
  }
  else if (received == '2'){

 analogWrite(ENA, 255);
 analogWrite(ENB, 255); 
 
      backward();
  }
  else if(received == '3'){

 analogWrite(ENA, 200);
 analogWrite(ENB, 200); 
 
    left();
  }
  else if (received == '4'){

 analogWrite(ENA, 200);
 analogWrite(ENB, 200); 
 
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

  else if(received == '9'){
    rotate();
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
                   digitalWrite(IN2, LOW);
                    digitalWrite(IN1, HIGH);
                    digitalWrite(IN3, LOW);
                    digitalWrite(IN4, HIGH);
  }

  void right(){
    Serial.println("right");
                   digitalWrite(IN2, HIGH);
                    digitalWrite(IN1, LOW);
                    digitalWrite(IN3, HIGH);
                    digitalWrite(IN4, LOW);
  }

  void liftup(){
    Serial.println("arms up");
//    digitalWrite(IN5,HIGH);
 //   digitalWrite(IN6,LOW);
  
    
  }

  void liftdown(){
    Serial.println("arms down");

//    digitalWrite(IN5,LOW);
 //   digitalWrite(IN6,HIGH);
 
    
  }

  void grip_contrax(){
    Serial.println("contraxing");
 
  //  digitalWrite(IN7,LOW);
  //  digitalWrite(IN8,HIGH);
    
  }

  void grip_relax(){
    Serial.println("arms relaxing");

  //  digitalWrite(IN7,HIGH);
  //  digitalWrite(IN8,LOW);
    
  }

  void rotate(){
    Serial.println("rotating");
                    digitalWrite(IN2, HIGH);
                    digitalWrite(IN1, LOW);
                    digitalWrite(IN3, HIGH);
                    digitalWrite(IN4, LOW);
    
    
  }

  void stopit(){
    Serial.println("stop");
                        digitalWrite(IN1, LOW);
                        digitalWrite(IN2, LOW);
                        digitalWrite(IN3, LOW);
                        digitalWrite(IN4, LOW);
     //                   digitalWrite(IN5,LOW);
     //                  digitalWrite(IN6,LOW);
      //                  digitalWrite(IN7,LOW);
      //                  digitalWrite(IN8,LOW);
  }
