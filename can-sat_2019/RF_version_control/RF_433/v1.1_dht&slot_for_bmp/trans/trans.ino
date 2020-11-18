#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
 
// Include DHT Libraries from Adafruit
// Dependant upon Adafruit_Sensors Library
#include "DHT.h";
 
// Define Constants
 
#define DHTPIN 7       // DHT-22 Output Pin connection
#define DHTTYPE DHT11   // DHT Type is DHT 22 (AM2302)
 
// Define Variables
 
float _hum;    // Stores humidity value in percent
float _temp;   // Stores temperature value in Celcius
float _alti = 1500;
float _press = 805;
 
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
 
  // Initialize ASK Object
  rf_driver.init();
  // Start DHT Sensor
  dht.begin();
 
}
 
void loop()
{
 
   
    _hum = dht.readHumidity();  // Get Humidity value
    _temp= dht.readTemperature();  // Get Temperature value
    
    
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
    delay(1000);
  
}
