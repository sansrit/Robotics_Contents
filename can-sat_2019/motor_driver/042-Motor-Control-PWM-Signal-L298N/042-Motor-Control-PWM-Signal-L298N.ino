const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 7;

const int ENA = 5;
const int ENB = 6;



void setup() {

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

  //Controlling pulse witdth modulations.
  
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
 

}

void loop() {

  analogWrite(ENA, 255);
  analogWrite(ENB, 255); 

  if(received == '1'){
         forward();
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
  else{
    stopit();
  }

}

  void forward(){
                    digitalWrite(IN1, HIGH);
                    digitalWrite(IN2, LOW);
                    digitalWrite(IN3, HIGH);
                    digitalWrite(IN4, LOW);
  }

  void backward(){
                      digitalWrite(IN1, LOW);
                      digitalWrite(IN2, HIGH);
                      digitalWrite(IN3, LOW);
                      digitalWrite(IN4, HIGH);
  }

  void left(){
                    digitalWrite(IN1, LOW);
                    digitalWrite(IN2, LOW);
                    digitalWrite(IN3, HIGH);
                    digitalWrite(IN4, LOW);
  }

  void right(){
                      digitalWrite(IN1, HIGH);
                      digitalWrite(IN2, LOW);
                      digitalWrite(IN3, HIGH);
                      digitalWrite(IN4, HIGH);
  }

  void stopit(){
                        digitalWrite(IN1, LOW);
                        digitalWrite(IN2, LOW);
                        digitalWrite(IN3, LOW);
                        digitalWrite(IN4, LOW);
  }
