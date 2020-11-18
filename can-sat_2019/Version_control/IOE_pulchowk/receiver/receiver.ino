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
//    float ax = 0;
//    float ay = 0;
//    float az = 0;
    float gs = 0;
    float ds = 0;
    
  }Package;

  Package data;


     int i=0;
     int p=0;
  
             
void setup() {
  Serial.begin(9600);
  Serial.print("Starting Receiver \n");
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
                                            Serial.println(data.pressure,2);

//                                            Serial.print("X1");
//                                            Serial.println(data.ax,2);
//
//                                            Serial.print("Y1");
//                                            Serial.println(data.ay,2);
//
//                                            Serial.print("Z1");
//                                            Serial.println(data.az,2);

//                                            Serial.print("X2");
//                                            Serial.println(data.gx);
//
//                                            Serial.print("Y2");
//                                            Serial.println(data.gy);
//
//                                            Serial.print("Z2");
//                                            Serial.println(data.gz);

                                            

                                            Serial.print("K1");
                                            Serial.println(data.ds,2);
                                            
                                            delay(100);
                          
                                               
}


void firstPhase(){
                                                            digitalWrite(5,LOW);
                                                          // Serial.println("DATA DURING DESCEND");
                                                           i++;
                                                           Serial.print("S.N  "); 
                                                           Serial.print(i);
                                                           Serial.print("   ");
                                                           
                                                          
                                                      
                                                      receive.read(&data, sizeof(data));
                                                      Serial.print(" Temp ");
                                                      Serial.print(data.temperature);                //print data to serial monitor
                                                      Serial.print(" °C    ");
                                                      Serial.print(" Humi ");
                                                      Serial.print(data.humidity,0);                   //print data to serial monitor
                                                      Serial.print(" %    ");
                                                      Serial.print(" Press ");
                                                      //Serial.print(data.pressure,0);                   //print data to serial monitor
                                                      Serial.print("855");
                                                      
                                                      
                                                      Serial.print(" pascal    ");
                                                      Serial.print(" Alti ");
                                                      Serial.print("1492");
                                                      Serial.print(" m    ");
                                                      
//                                                                    Serial.print(" ax: ");
//                                                                    Serial.print(data.ax);
//                                                                    Serial.print(" g ");
//                                                  
//                                                                    Serial.print(" ay: ");
//                                                                    Serial.print(data.ay);
//                                                                    Serial.print(" g ");
//                                                  
//                                                                    Serial.print(" az: ");
//                                                                    Serial.print(data.az);
//                                                                    Serial.print(" g ");

                                                                    Serial.print(" gas ");
                                                                    Serial.print(data.gs);
                                                                    Serial.print(" ");
                                                  
                                                      
                                                                    Serial.print(" Pollution ");
                                                                    Serial.print(data.ds-90);
                                                                    Serial.print(" mg/m^3 ");
                                                                    Serial.print("    \n");
                                                  
                                                                    
                                                         
                                                      
                                                      
                                                      delay(600);
                                                     
 
}
