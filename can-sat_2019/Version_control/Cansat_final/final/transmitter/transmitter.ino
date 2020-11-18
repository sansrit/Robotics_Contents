#include <nRF24L01.h>       //header file for rf
#include <RF24.h>           //header file for rf  
#include <RF24_config.h>    //header file for rf
#include <DHT.h>            //header file for DHT11
#include <Adafruit_BMP085.h>//header file for BMP180
#include <Wire.h>           ////header file for I2c protocol also supports for mpu
#include <virtuabotixRTC.h>

#define DHTPIN 3                // Digital pin def for DHT 11. Don't connect to pin 0 or pin 1 can define for any other pin
#define DHTTYPE DHT11           // Define DHT11 module.
virtuabotixRTC myRTC(4, 5, 6);

                    //Global defination for MPU6050
                    #define STATUS_PIN                      13
                    
                    #define MPU_POWER_REG                   0x6B
                    #define MPU_POWER_CYCLE                 0b00000000
                    #define MPU_READ_TIMEOUT                2000
                    #define MPU_SAMP_FREQ                   250
                    
                    #define MPU_GYRO_CFG_REG                0x1B
                    #define MPU_GYRO_READ_REG               0x43
                    #define MPU_GYRO_READ_REG_SIZE          6
                    #define MPU_GYRO_CFG_250DEG             0b00000000
                    #define MPU_GYRO_READINGSCALE_250DEG    131.0
                    #define MPU_GYRO_CFG_500DEG             0b00001000
                    #define MPU_GYRO_READINGSCALE_500DEG    65.5
                    #define MPU_GYRO_CFG_1000DEG            0b00010000
                    #define MPU_GYRO_READINGSCALE_1000DEG   32.8
                    #define MPU_GYRO_CFG_2000DEG            0b00011000
                    #define MPU_GYRO_READINGSCALE_2000DEG   16.4
                    #define MPU_CALIBRATE_READING_NUM       2000
                    
                    
                    #define MPU_ACCEL_CFG_REG               0x1C
                    #define MPU_ACCEL_READ_REG              0x3B
                    #define MPU_ACCEL_READ_REG_SIZE         6
                    #define MPU_ACCEL_CFG_2G                0b00000000
                    #define MPU_ACCEL_READINGSCALE_2G       16384.0
                    #define MPU_ACCEL_CFG_4G                0b00001000
                    #define MPU_ACCEL_READINGSCALE_4G       8192.0
                    #define MPU_ACCEL_CFG_8G                0b00010000
                    #define MPU_ACCEL_READINGSCALE_8G       4096.0
                    #define MPU_ACCEL_CFG_16G               0b00011000
                    #define MPU_ACCEL_READINGSCALE_16G      2048.0
                    
                    #define MPU1_I2C_ADDRESS                0b1101000     

                    //variables declearation for MPU

                                  float gForceX, gForceY, gForceZ;
                                  float calibX, calibY, calibZ;
                                  float rotX,rotY,rotZ;
                                  long loopTimer = 0; //variable to calibrate sensor.
                                 

                               


                                  



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
    float ax = 0;
    float ay = 0;
    float az = 0;
    int hr = 0;
    int mi = 0;
    int se = 0;
    //const char text[] = "CE";
    
  }Package;

Package data;

void setup() {
  Serial.begin(9600);
  
  myRTC.setDS1302Time(20, 13, 1, 2, 9, 12, 2019); //sec,min,hours,dayofweek,dayofmoth,month,year
  dht.begin();  //dht
  bmp.begin();  //bmp
  // mpu
            pinMode(STATUS_PIN,OUTPUT); //for debugging led pin 13
            digitalWrite(STATUS_PIN, LOW);
            Wire.begin();
            SetupMPU();
            calibrateGyro();
  
  //mpu
  transmit.begin();
  transmit.openWritingPipe(address);            //open writing pipe to address 00001
  transmit.setPALevel(RF24_PA_MIN);             //set RF power output to minimum
  transmit.setDataRate(RF24_250KBPS);           //set data rate to 250kbps
  transmit.setChannel(100);                               //set frequency to channel 100
  transmit.stopListening();
  }



void loop() {
   myRTC.updateTime();

//Serial.print("Current Date / Time: ");
// Serial.print(myRTC.dayofmonth); //You can switch between day and month if you're using American system
// Serial.print("/");
// Serial.print(myRTC.month);
// Serial.print("/");
// Serial.print(myRTC.year);
// Serial.print(" ");
// Serial.print(myRTC.hours);
// Serial.print(":");
// Serial.print(myRTC.minutes);
// Serial.print(":");
// Serial.println(myRTC.seconds);

   
                  
                   if(ReadMPU())
                     {                          
                        while(micros() - loopTimer < 1000);
                        loopTimer = micros();
                     }


                 
      
  //data.temperature = ((dht.readTemperature()+bmp.readTemperature())/2);
  data.temperature = (dht.readTemperature());
  data.humidity = dht.readHumidity();
  data.pressure = bmp.readPressure();
  data.altitude = bmp.readAltitude(101500);
  
  data.hr = myRTC.hours;
  data.mi = myRTC.minutes;
  data.se = myRTC.seconds;
  //data.text;
   
 data.ax = gForceX;
  data.ay = gForceY;
   data.az = gForceZ;
   
   
  


        transmit.write(&data,sizeof(data));         //transmit temperature
        transmit.write(&data,sizeof(data));         //transmit humidity
        transmit.write(&data,sizeof(data));         //transmit pressure
        transmit.write(&data,sizeof(data));         //transmit altitude
        transmit.write(&data,sizeof(data));         //hr
        transmit.write(&data,sizeof(data));         //min
        transmit.write(&data,sizeof(data));         //sec
        transmit.write(&data,sizeof(data));         //  transmit acceleration x
        transmit.write(&data,sizeof(data));         //   transmit acceleration y 
        transmit.write(&data,sizeof(data));         //   transmit acceleration z
        //transmit.write(&data,sizeof(data));         //call_sign

       
        

              
 
                  

 

}

//MPU custom function to call on 

          void SetupMPU()   // function to setup MPU6050
            {
              Wire.beginTransmission(MPU1_I2C_ADDRESS);
              Wire.write(MPU_POWER_REG);
              Wire.write(MPU_POWER_CYCLE); 
              Wire.endTransmission();
              Wire.beginTransmission(MPU1_I2C_ADDRESS);
              Wire.write(MPU_GYRO_CFG_REG);
              Wire.write(MPU_GYRO_CFG_250DEG); 
              Wire.endTransmission();
              Wire.beginTransmission(MPU1_I2C_ADDRESS);
              Wire.write(MPU_ACCEL_CFG_REG);
              Wire.write(MPU_ACCEL_CFG_2G); 
              Wire.endTransmission();
            }



                                  bool ReadMPU()  // function to read MPU
                                  {
                                    if(MPUReadAccel() && MPUReadGyro())
                                    {
                                  //    calcRotation();
                                  //    printData();
                                      return true;
                                    }
                                    return false;
                                  }


                                               bool MPUReadAccel()
                                              {
                                                Wire.beginTransmission(MPU1_I2C_ADDRESS);
                                                Wire.write(MPU_ACCEL_READ_REG);
                                                Wire.endTransmission();
                                                Wire.requestFrom(MPU1_I2C_ADDRESS, MPU_ACCEL_READ_REG_SIZE);
                                                long timeout = millis() + MPU_READ_TIMEOUT;
                                                while(Wire.available() < MPU_ACCEL_READ_REG_SIZE && timeout < millis());
                                                if (timeout <= millis()) return false;
                                                gForceX = (long)(Wire.read() << 8 | Wire.read()) / MPU_ACCEL_READINGSCALE_2G;
                                                gForceY = (long)(Wire.read() << 8 | Wire.read()) / MPU_ACCEL_READINGSCALE_2G;
                                                gForceZ = (long)(Wire.read() << 8 | Wire.read()) / MPU_ACCEL_READINGSCALE_2G;
                                                return true;
                                              }

bool MPUReadGyro()
{
  Wire.beginTransmission(MPU1_I2C_ADDRESS);
  Wire.write(MPU_GYRO_READ_REG);
  Wire.endTransmission();
  Wire.requestFrom(MPU1_I2C_ADDRESS, MPU_GYRO_READ_REG_SIZE);
  long timeout = millis() + MPU_READ_TIMEOUT;
  while(Wire.available() < MPU_ACCEL_READ_REG_SIZE && timeout < millis());
  if (timeout <= millis()) return false;
  rotX = (long)(Wire.read() << 8 | Wire.read()) / MPU_GYRO_READINGSCALE_250DEG;
  rotY = (long)(Wire.read() << 8 | Wire.read()) / MPU_GYRO_READINGSCALE_250DEG;
  rotZ = (long)(Wire.read() << 8 | Wire.read()) / MPU_GYRO_READINGSCALE_250DEG;
  
  return true;
}                                         


void calibrateGyro() //2nd function on setup for calibrating gyro in setup.
{
  loopTimer = 0;
  
  digitalWrite(STATUS_PIN, HIGH);
 // Serial.println("Calibrating Gyro");
  
  calibX = 0;
  calibY = 0;
  calibZ = 0;
  
  
  for(int i=0; i<MPU_CALIBRATE_READING_NUM;i++)
  {
    if(MPUReadGyro())
    {
      calibX += rotX;
      calibY += rotY;
      calibZ += rotZ;

      //wait for the next sample cycle
      while(micros() - loopTimer < 1000);
      loopTimer = micros();
    }
    else
    {
      i--;
    }
  }
  calibX = calibX / MPU_CALIBRATE_READING_NUM;
  calibY = calibY / MPU_CALIBRATE_READING_NUM;
  calibZ = calibZ / MPU_CALIBRATE_READING_NUM;


  digitalWrite(STATUS_PIN, LOW);
}