const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

const int ENA = 6;
const int ENB = 5;



void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(4,INPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

  
}

void loop() {
 Serial.print("IR2");
 Serial.print(digitalRead(7));
 Serial.print("   IR3");
 Serial.println(digitalRead(4));
 if(digitalRead(7)== 0 && digitalRead(4)==0){

  forward();
 }
 else if(digitalRead(7)== 1 && digitalRead(4)==0){
 
  left();
 }
 
  else if(digitalRead(7)== 0 && digitalRead(4)==1){

  right();
 }

 else if(digitalRead(7)== 1 && digitalRead(4)==1){
  chup();
 }
 
 
 


  


}

void forward(){
      Serial.println("forward");
      analogWrite(ENA, 65);
      analogWrite(ENB, 65); 
                      digitalWrite(IN1, HIGH);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, HIGH);
                      digitalWrite(IN4, LOW);
  }

 void left(){
      
      Serial.println("left");
      analogWrite(ENA, 85);
      analogWrite(ENB, 85);
                  

                      digitalWrite(IN1, HIGH);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, HIGH);
                      digitalWrite(IN4, HIGH);
                     
  }

   void right(){
      
      Serial.println("right");
      analogWrite(ENA, 85);
      analogWrite(ENB, 85); 

                    digitalWrite(IN1, LOW);
                    digitalWrite(IN2, LOW);
                    digitalWrite(IN3, HIGH);
                    digitalWrite(IN4, LOW);
                    
                      
  }

    void chup(){
      Serial.println("right");
                      digitalWrite(IN1, LOW);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, LOW);
                      digitalWrite(IN4, LOW);
  }

  

  
