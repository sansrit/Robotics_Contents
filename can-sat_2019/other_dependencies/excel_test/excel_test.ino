void setup()
{
  Serial.begin(9600);
  Serial.println("CLEARDATA");
  Serial.println("LABEL, current time, random no, name");
}

void loop(){
  Serial.print("DATA,TIME,");
  Serial.print(random(0,50));
  Serial.print(",");
  Serial.println("Sansrit");
  delay(1000);
  
}
