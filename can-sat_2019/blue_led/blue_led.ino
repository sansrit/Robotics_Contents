char Incoming_value = 0;
                
void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT);      
  pinMode(4, OUTPUT); 
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1') {            
      digitalWrite(13, HIGH);  
      digitalWrite(4, HIGH);
      Serial.println("high");
    }
    else if(Incoming_value == '0'){       
      digitalWrite(13, LOW); 
      digitalWrite(4,LOW);  
      Serial.println("low");
     
      
  }                            
} 
}
