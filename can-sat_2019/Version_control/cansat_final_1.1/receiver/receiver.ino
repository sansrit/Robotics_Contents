#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>

RF24 receive (9,8);    // ce,csn                    //create object called receive
byte address [5] = "10101";                 //create an array with 5 elements, where each element is 1 byte;
int button = 2;
int button4 = 4;
int buttonState;
int buttonState7;



typedef struct
  {
    float temperature = 0;
    int humidity = 0;
    float pressure = 0;
    float altitude = 0;
    float ax = 0;
    float ay = 0;
    float az = 0;
    int hr = 0;
    int mi = 0;
    int se = 0;
    
  }Package;

  Package data;


     int i=0;
     int p=0;
  
             
void setup() {
  Serial.begin(9600);
  receive.begin();
  receive.openReadingPipe(0,address);      //open reading pipe 0 at address 00001
  receive.setPALevel(RF24_PA_MIN);         //Set RF output to minimum
  receive.setDataRate(RF24_250KBPS);       //set datarate to 250kbps
  receive.setChannel(100);                 //set frequency to channel 100
  receive.startListening(); 
  pinMode(2,INPUT);
  pinMode(5,OUTPUT);
  pinMode(3,INPUT);
  pinMode(7,OUTPUT);
  
     

  }

void loop() {
  int buttonState7 = digitalRead(3);
  
  if(buttonState7 == 1){
    digitalWrite(7,LOW);
    
  }
  else{
    //delay1();
                digitalWrite(7,HIGH);
                delay(100);
                digitalWrite(7,LOW);
                
  }

  if (receive.available())                //check when received data available
  {
   int buttonState = digitalRead(2);
  

   

   
                               
                    
                                 
                                              
                                                
                                                
                                            
                                            receive.read(&data, sizeof(data));
                                            Serial.print("H1");
                                            Serial.println(data.humidity); 

                                            Serial.print("A2");
                                            Serial.println(data.altitude);
                                            
                                            Serial.print("T3");
                                            Serial.println(data.temperature);
                                            
                                            Serial.print("D1");
                                            Serial.println(data.pressure); //print data to serial monitor

                                            Serial.print("X1");
                                            Serial.println(data.ax); 

                                            Serial.print("Y1");
                                            Serial.println(data.ay); 

                                            Serial.print("Z1");
                                            Serial.println(data.az); 

                                            Serial.print("E5");
                                            Serial.print(data.hr);
                                            Serial.print(":");
                                            Serial.print(data.mi);
                                            Serial.print(":");
                                            Serial.println(data.se);
                                            
                                         if(buttonState == 0){
                                          Serial.print("K3");
                                          Serial.println("12");
                                         }
                                          else{
                                             Serial.print("K3");
                                          Serial.println("11"); 
                                          }
                                            delay(600);
                                               
                                
 }

}






                                                     
 
