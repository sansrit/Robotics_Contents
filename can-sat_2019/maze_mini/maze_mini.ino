const int IN1 = 4;
const int IN2 = 5;
const int IN3 = 6;
const int IN4 = 7;

const int ENA = 3;
const int ENB = 11;

//1 1 1 1 1 1

char path[30] = {};
int pathLength;
int readLength;

#define leapTime 200



void setup() {
  Serial.begin(9600);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  
  
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

  
}

void loop() {

 readSensors();
 
 if(L == 1 && C ==0 && R == 1){

      forward();
 }   
 else{
    leftHandWall();
    }

}

  void readSensors(){
    L = digitalRead(8);
    C = digitalRead(9);
    R = digitalRead(10);
}



void forward(){
      Serial.println("forward");
      analogWrite(ENA, 100);
      analogWrite(ENB, 100); 
                      digitalWrite(IN1, LOW);
                      digitalWrite(IN2, HIGH);
                      digitalWrite(IN3, LOW);
                      digitalWrite(IN4, HIGH);
  }

 void movelittle(){
     Serial.println("forward");
      analogWrite(ENA, 100);
      analogWrite(ENB, 100); 
                      digitalWrite(IN1, LOW);
                      digitalWrite(IN2, HIGH);
                      digitalWrite(IN3, LOW);
                      digitalWrite(IN4, HIGH);

  
  }

 void left(){
      
      Serial.println("left");
      analogWrite(ENA, 110);
      analogWrite(ENB, 110);
                  

                      digitalWrite(IN1, HIGH);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, HIGH);
                      digitalWrite(IN4, HIGH);
                     
  }

   void right(){
      
      Serial.println("right");
      analogWrite(ENA, 110);
      analogWrite(ENB, 110); 

                    digitalWrite(IN1, LOW);
                    digitalWrite(IN2, LOW);
                    digitalWrite(IN3, HIGH);
                    digitalWrite(IN4, LOW);
                    
                      
  }

    void chup(){
      Serial.println("stop");
       analogWrite(ENA, 110);
      analogWrite(ENB, 110); 
                      digitalWrite(IN1, LOW);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, LOW);
                      digitalWrite(IN4, LOW);
  }

   void turn(){
    Serial.println("turn");
     analogWrite(ENA, 110);
      analogWrite(ENB, 110); 
                      digitalWrite(IN1, HIGH);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, HIGH);
                      digitalWrite(IN4, HIGH);
    
    }


  
