 #include <Wire.h>
#include <Adafruit_BMP085.h>



Adafruit_BMP085 bmp;
  
void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
  Serial.println("Could not find a valid BMP085 sensor, check wiring!");
  while (1) {}
  }

//
//  Serial.println("LABEL,CURRENT time,TEMPERATURE(°C),PRESSURE(PA),ALTITUDE(M)");
 
}

void loop() {

//    Serial.print("DATA,TIME,");
    //Serial.print((float)bmp.readTemperature());
    //Serial.print(",");
//    Serial.print(bmp.readPressure());
//    Serial.print(",");
//   Serial.print(bmp.readAltitude(101500));
   float a = bmp.readPressure();
    Serial.print(a);
//    Serial.println(" °C");
//    Serial.println(value);
//serial.write ni use garchan byte pathau na.

    
    Serial.print("Pressure = ");
    Serial.print(bmp.readPressure());
    Serial.print("    ");
    
    Serial.print(bmp.readTemperature());
    
    Serial.print("    ");
    Serial.print(bmp.readAltitude());
//    Serial.println(" Pa");
//    
//    // Calculate altitude assuming 'standard' barometric
//    // pressure of 1013.25 millibar = 101325 Pascal
//    Serial.print("Altitude = ");
//    Serial.print(bmp.readAltitude());
//    Serial.println(" meters");

//    Serial.print("Pressure at sealevel (calculated) = ");
//    Serial.print(bmp.readSealevelPressure());
//    Serial.println(" Pa");

  // you can get a more precise measurement of altitude
  // if you know the current sea level pressure which will
  // vary with weather and such. If it is 1015 millibars
  // that is equal to 101500 Pascals.
//   
//    Serial.print("Altitude = ");
//    Serial.print(bmp.readAltitude(101500));
//    Serial.println(" meters");
    
    Serial.println();

 
    
    delay(500);
}
