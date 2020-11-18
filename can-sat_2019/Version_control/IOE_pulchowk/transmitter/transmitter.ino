#include <nRF24L01.h>       //header file for rf
#include <RF24.h>           //header file for rf  
#include <RF24_config.h>    //header file for rf
#include <DHT.h>            //header file for DHT11
#include <Adafruit_BMP085.h>//header file for BMP180
#include <Wire.h>           ////header file for I2c protocol also supports for mpu
#define USE_AVG

#define DHTPIN 3                // Digital pin def for DHT 11. Don't connect to pin 0 or pin 1 can define for any other pin
#define DHTTYPE DHT11           // Define DHT11 module.
const int sharpLEDPin = 4;      // Arduino digital pin 7 connect to sensor LED.
const int sharpVoPin = A1;      //dust sensor
int sensorValue;


#ifdef USE_AVG
#define N 100
static unsigned long VoRawTotal = 0;
static int VoRawCount = 0;
#endif // USE_AVG

// Set the typical output voltage in Volts when there is zero dust.
static float Voc = 0.6;

// Use the typical sensitivity in units of V per 100ug/m3.
const float K = 0.5;


                    
                                 

             



DHT dht(DHTPIN, DHTTYPE);       //create DHT object called dht.
Adafruit_BMP085 bmp;            //forward declearation.



RF24 transmit (9,8); //ce,csn                    //create RF24 object called transmit

byte address [5] = "00001";                     //set address to 00001

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

void printFValue(String text, float value, String units, bool isLast = false) {
  Serial.print(text);
  Serial.print("=");
  Serial.print(value);
  Serial.print(units);
  if (!isLast) {
    Serial.print(", ");
  }
}

void setup() {
  Serial.begin(9600);
  dht.begin();  //dht
  bmp.begin();  //bmp
  // mpu
  pinMode(sharpLEDPin, OUTPUT);
           
         
            Wire.begin();
          
  
  //mpu
  transmit.begin();
  transmit.openWritingPipe(address);            //open writing pipe to address 00001
  transmit.setPALevel(RF24_PA_MIN);             //set RF power output to minimum
  transmit.setDataRate(RF24_250KBPS);           //set data rate to 250kbps
  transmit.setChannel(100);                               //set frequency to channel 100
  transmit.stopListening();
  }



void loop() {

digitalWrite(sharpLEDPin, LOW);
delayMicroseconds(280);
int VoRaw = analogRead(sharpVoPin);
digitalWrite(sharpLEDPin, HIGH);
delayMicroseconds(9620);
// Use averaging if needed.
  float Vo = VoRaw;
  #ifdef USE_AVG
  VoRawTotal += VoRaw;
  VoRawCount++;
  if ( VoRawCount >= N ) {
    Vo = 1.0 * VoRawTotal / N;
    VoRawCount = 0;
    VoRawTotal = 0;
  } else {
    return;
  }
  #endif // USE_AVG

  // Compute the output voltage in Volts.
  Vo = Vo / 1024.0 * 5.0;
  //printFValue("Vo", Vo*1000.0, "mV");

  // Convert to Dust Density in units of ug/m3.
  float dV = Vo - Voc;
  if ( dV < 0 ) {
    dV = 0;
    Voc = Vo;
  }
  float dustDensity = dV / K * 100.0;
//  printFValue("DustDensity", dustDensity, "ug/m3", true);
//  Serial.println("");
  
 
 

sensorValue = analogRead(0); 
//Serial.print(sensorValue);
//Serial.println("  ");

          
  //dust                   

                 
      
  data.temperature = dht.readTemperature();
  data.humidity = dht.readHumidity();
  data.pressure = bmp.readPressure();
  data.altitude = bmp.readAltitude(101500);
  
//  data.ax = gForceX;
//  data.ay = gForceY;
//  data.az = gForceZ;
  data.gs = sensorValue;
  data.ds = dustDensity;
  

        transmit.write(&data,sizeof(data));         //transmit temperature
        transmit.write(&data,sizeof(data));         //transmit humidity
        transmit.write(&data,sizeof(data));         //transmit pressure
        transmit.write(&data,sizeof(data));         //transmit altitude
//        transmit.write(&data,sizeof(data));         //transmit acceleration x
//        transmit.write(&data,sizeof(data));         //transmit acceleration y  
//        transmit.write(&data,sizeof(data));         //transmit acceleration z
        transmit.write(&data,sizeof(data));         //gas Intensity
        transmit.write(&data,sizeof(data));         //dust
        
        
                                                      Serial.print(" Temp ");
                                                      Serial.print(data.temperature);                //print data to serial monitor
                                                      Serial.print(" °C    ");
                                                      Serial.print(" Humi ");
                                                      Serial.print(data.humidity,0);                   //print data to serial monitor
                                                      Serial.print(" %    ");
//                                                      Serial.print(" Press ");
//                                                      Serial.print(data.pressure,0);                   //print data to serial monitor
//                                                      Serial.print(" pascal    ");
//                                                      Serial.print(" Alti ");
//                                                      Serial.print(data.altitude);
//                                                      Serial.print(" m    ");
                                                      
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
                                                                    Serial.print(data.ds);
                                                                    Serial.print(" mg/m^3 ");
                                                                    Serial.print("    \n");

                                                                    delay(100);

}

                                                                 

                                                                    


                                                                    








               
                           //delay to prevent false rainfall readings
