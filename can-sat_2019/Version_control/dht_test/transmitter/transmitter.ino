#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>
#include <DHT.h>
#include <Adafruit_BMP085.h>
#include <Wire.h>

#define DHTPIN 5                // do not connect to pin 0 or pin 1
#define DHTTYPE DHT11           // Define DHT11 module
DHT dht(DHTPIN, DHTTYPE);       //create DHT object called dht


Adafruit_BMP085 bmp;

RF24 transmit (9,8); //ce,csn                    //create RF24 object called transmit

byte address [5] = "00001";                     //set address to 00001


struct package
  {
    float temperature = 0;
    float humidity = 0;
    float pressure = 0;
    float altitude = 0;
  };

typedef struct package Package;
Package data;

void setup() {
  dht.begin();
  bmp.begin();
  transmit.begin();
  transmit.openWritingPipe(address);            //open writing pipe to address 00001
  transmit.setPALevel(RF24_PA_MIN);             //set RF power output to minimum
  transmit.setDataRate(RF24_250KBPS);           //set data rate to 250kbps
  transmit.setChannel(100);                               //set frequency to channel 100
  transmit.stopListening();
  }



void loop() {
  data.temperature = dht.readTemperature();
  data.humidity = dht.readHumidity();
  data.pressure = bmp.readPressure();
  data.altitude = bmp.readAltitude(101500);

        transmit.write(&data,sizeof(data));         //transmit the data
        transmit.write(&data,sizeof(data));         //transmit the data
        transmit.write(&data,sizeof(data));
        transmit.write(&data,sizeof(data));
        
        

               
 
  delay(1000);                                 //delay to prevent false rainfall readings

}
