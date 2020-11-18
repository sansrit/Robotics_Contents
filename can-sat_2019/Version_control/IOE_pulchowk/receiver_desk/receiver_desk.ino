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

                                                
                                            
                                            receive.read(&data, sizeof(data));
                                             Serial.print("H1");
                                            Serial.println(data.humidity,0); 

                                            Serial.print("A2");
                                            Serial.println(data.gs,0);
                                            
                                            Serial.print("T3");
                                            Serial.println(data.temperature,0);                //print data to serial monitor

                                            
                                            Serial.print("D1");
                                            Serial.println(data.ds-90,2);

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

                                            

//                                            Serial.print("K1");
//                                            Serial.println(data.ds,2);
                                            
                                            delay(400);
                          
                                               
}
