#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>

RF24 receive (9,8);    // ce,csn                    //create object called receive
byte address [5] = "00001";                 //create an array with 5 elements, where each element is 1 byte;
int button = 2;
int button4 = 4;
int buttonState;
int buttonState7;


typedef struct
  {
    float temperature = 0;
    float humidity = 0;
    float pressure = 0;
    float altitude = 0;
    float ds = 0;
    float ax = 0;
    float ay = 0;
    float az = 0;
    float gx = 0;
    float gy = 0;
    float gz = 0;
   
    
  }Package;

  Package data;


     int i=0;
     int p=0;
  
             
void setup() {
  Serial.begin(9600);
  //Serial.print("Starting Receiver \n");
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
  

   

   
                               if(buttonState == 0){
                    
                                  secondPhase();                        
                                  }
                                else{
                                   firstPhase();
                                 }
 }

}


void secondPhase(){
                                                 digitalWrite(5,HIGH);
                                                
                                                
                                            
                                            receive.read(&data, sizeof(data));
                                            Serial.print("H1");
                                            Serial.println(data.humidity,0); 

                                            Serial.print("A2");
                                            Serial.println(data.altitude,0);
                                            
                                            Serial.print("T3");
                                            Serial.println(data.temperature,0);                //print data to serial monitor

                                            Serial.print("D1");
                                            Serial.println(data.ds,2);
                                       
                                          
                                        
                                            delay(100);
                          
                                               
}


void firstPhase(){
                                                           digitalWrite(5,LOW);
                                                           Serial.println("DATA DURING DESCEND");
                                                           i++;
                                                           Serial.print("S.N  "); 
                                                           Serial.print(i);
                                                           Serial.print("   ");
                                                           
                                                          
                                                      
                                                      receive.read(&data, sizeof(data));
                                                      Serial.print("Temperature: ");
                                                      Serial.print(data.temperature);                //print data to serial monitor
                                                      Serial.print(" °C    ");
                                                      Serial.print(" Humidity: ");
                                                      Serial.print(data.humidity);                   //print data to serial monitor
                                                      Serial.print(" %    ");
                                                      Serial.print(" Atm pressure: ");
                                                      Serial.print(data.pressure);                   //print data to serial monitor
                                                      Serial.print(" pascal    ");
                                                      Serial.print(" Altitude: ");
                                                      Serial.print(data.altitude);
                                                      Serial.print(" meter    ");
                                                      
                                                                    Serial.print(" ax: ");
                                                                    Serial.print(data.ax);
                                                                    Serial.print("    ");
                                                  
                                                                    Serial.print(" ay: ");
                                                                    Serial.print(data.ay);
                                                                    Serial.print("    ");
                                                  
                                                                    Serial.print(" az: ");
                                                                    Serial.print(data.az);
                                                                    Serial.print("    ");
                                                  
                                                                    Serial.print(" gx: ");
                                                                    Serial.print(data.az);
                                                                    Serial.print("    ");
                                                  
                                                                    Serial.print(" gy: ");
                                                                    Serial.print(data.az);
                                                                    Serial.print("    ");
                                                  
                                                                    Serial.print(" gz: ");
                                                                    Serial.print(data.az);
                                                                    Serial.print("    \n");
                                                  
                                                                    
                                                         
                                                      
                                                      
                                                      delay(100);
                                                     
 
}

//void delay1(){
//  digitalWrite(7,HIGH);
//  delay(100);
//  digitalWrite(7,LOW);
//  delay(80);
//}
