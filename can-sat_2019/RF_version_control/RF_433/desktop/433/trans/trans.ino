#include <RH_ASK.h>
#include <SPI.h> 
#include <Wire.h>
#include <Adafruit_BMP085.h>
 
// Include DHT Libraries from Adafruit
// Dependant upon Adafruit_Sensors Library
#include "DHT.h";
 
// Define Constants
 
#define DHTPIN 5       // DHT-22 Output Pin connection
#define DHTTYPE DHT11   // DHT Type is DHT 22 (AM2302)

Adafruit_BMP085 bmp;
 
// Define Variables
 
float _hum;    // Stores humidity value in percent
float _temp;   // Stores temperature value in Celcius
float _alti;
float _press;
 
// Define output strings
 
String str_humid;
String str_temp;
String str_alti;
String str_press;





String str_out;
String str_tapkram;
String str_auchai;
String str_chap;
 
// Create Amplitude Shift Keying Object
RH_ASK rf_driver;
 
// Initialize DHT sensor for normal 16mhz Arduino
DHT dht(DHTPIN, DHTTYPE);


 
void setup() {
 Serial.begin(9600);
  // Initialize ASK Object
  rf_driver.init();
  // Start DHT Sensor
  dht.begin();
  bmp.begin();
 
}
 
void loop()
{
 
    // Serial.println(_alti);
    _hum = dht.readHumidity();  // Get Humidity value
    _temp= dht.readTemperature();  // Get Temperature value
    _alti= bmp.readAltitude(101500);
    _press= (bmp.readPressure()*0.01);
    
    
    // Convert Humidity to string
    str_humid = String(_hum);
    
    // Convert Temperature to string
    str_temp = String(_temp);

    str_alti = String(_alti);
    str_press = String(_press);

    
 
    // Combine Humidity and Temperature
    str_out = str_humid;// + "," + str_temp;
    str_tapkram = str_temp;
    str_auchai = str_alti;
    str_chap = str_press;

   
  
    Serial.println(dht.readHumidity());
    Serial.println(dht.readTemperature());
    Serial.println(bmp.readPressure());
    Serial.println(bmp.readAltitude());
    
    
    
    // Compose output character
    static char *msg = str_out.c_str();
    static char *temp = str_tapkram.c_str();
    static char *alti = str_auchai.c_str();
    static char *pres = str_chap.c_str();
    
    
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.send((uint8_t *)temp, strlen(msg));
    rf_driver.send((uint8_t *)alti, strlen(msg));
    rf_driver.send((uint8_t *)pres, strlen(msg));
    
    rf_driver.waitPacketSent();
    delay(300);


 
  
}
