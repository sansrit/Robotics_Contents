//#include <dht.h>
//
//
//#define dht_apin 3 // Analog Pin sensor is connected to
// 
//dht DHT;
// 
//void setup(){
// 
//  Serial.begin(9600);
//  delay(500);//Delay to let system boot
//  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
//  delay(1000);//Wait before accessing Sensor
// 
//}//end "setup()"
// 
//void loop(){
//  //Start of Program 
// 
//    DHT.read11(dht_apin);
//    
//    Serial.print("Current humidity = ");
//    Serial.print(DHT.humidity);
//    Serial.print("%  ");
//    Serial.print("temperature = ");
//    Serial.print(DHT.temperature); 
//    Serial.println("C  ");
//    
//    delay(5000);//Wait 5 seconds before accessing sensor again.
// 
//  //Fastest should be once every two seconds.
// 
//}// end loop(



#include <Wire.h>
#include <Adafruit_BMP085.h>
#define seaLevelPressure_hPa 1013.25

Adafruit_BMP085 bmp;
  
void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
  Serial.println("Could not find a valid BMP085 sensor, check wiring!");
  while (1) {}
  }
}
  
void loop() {
    Serial.print("Temperature = ");
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");
    
    Serial.print("Pressure = ");
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");

    Serial.print("Altitude = ");
    Serial.print(bmp.readAltitude());
    Serial.println(" meters");

    Serial.print("Pressure at sealevel (calculated) = ");
    Serial.print(bmp.readSealevelPressure());
    Serial.println(" Pa");

    Serial.print("Real altitude = ");
    Serial.print(bmp.readAltitude(seaLevelPressure_hPa * 100));
    Serial.println(" meters");
    
    Serial.println();
    delay(500);
}
