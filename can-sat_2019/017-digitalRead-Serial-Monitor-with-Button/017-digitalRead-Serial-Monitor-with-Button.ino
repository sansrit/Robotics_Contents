//Digital Read with Button


int pushButton =7; //digital pin 2 has a push button attached to it. Give it an name

//the setup routine runs once when you press reset
void setup() {

  Serial.begin(9600); //initialize serial comm. at 9600 bits per second

  pinMode(pushButton, INPUT); //make the push button's pin an input
}

//the loop routine runs over and over again forever
void loop() {

  int buttonState = digitalRead(pushButton); //read the input pin

  Serial.println(buttonState); //print out the state of the button

  delay(1); //delay in between reads for stability
}
