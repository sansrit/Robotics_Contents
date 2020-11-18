#include <nRF24L01.h>       //header file for rf
#include <RF24.h>           //header file for rf  
#include <RF24_config.h>    //header file for rf
#include <DHT.h>            //header file for DHT11
#include <Adafruit_BMP085.h>//header file for BMP180
#include <Wire.h>           ////header file for I2c protocol also supports for mpu
#include <virtuabotixRTC.h>

#define DHTPIN 3                // Digital pin def for DHT 11. Don't connect to pin 0 or pin 1 can define for any other pin
#define DHTTYPE DHT11           // Define DHT11 module.

                               


                                  



DHT dht(DHTPIN, DHTTYPE);       //create DHT object called dht.
Adafruit_BMP085 bmp;            //forward declearation.



RF24 transmit (9,8); //ce,csn                    //create RF24 object called transmit

byte address [5] = "10101";                     //set address to 00001

typedef struct
  {
    float temperature = 0;
    int humidity = 0;
    float pressure = 0;
    float altitude = 0;

  }Package;

Package data;

void setup() {
  Serial.begin(9600);
  
  
  dht.begin();  //dht
  bmp.begin();  //bmp
  
  //mpu
  transmit.begin();
  transmit.openWritingPipe(address);            //open writing pipe to address 00001
  transmit.setPALevel(RF24_PA_MIN);             //set RF power output to minimum
  transmit.setDataRate(RF24_250KBPS);           //set data rate to 250kbps
  transmit.setChannel(100);                               //set frequency to channel 100
  transmit.stopListening();
  }



void loop() {


   
                  
              


                 
      
  //data.temperature = ((dht.readTemperature()+bmp.readTemperature())/2);
  data.temperature = (dht.readTemperature());
  data.humidity = dht.readHumidity();
  data.pressure = bmp.readPressure();
  data.altitude = bmp.readAltitude(101500);
  
Serial.println(bmp.readAltitude(101500));
   
   
  


        transmit.write(&data,sizeof(data));         //transmit temperature
        transmit.write(&data,sizeof(data));         //transmit humidity
        transmit.write(&data,sizeof(data));         //transmit pressure
        transmit.write(&data,sizeof(data));         //transmit altitude
        transmit.write(&data,sizeof(data));         //hr
        transmit.write(&data,sizeof(data));         //min

              
 delay(1000);
                  

 

}
