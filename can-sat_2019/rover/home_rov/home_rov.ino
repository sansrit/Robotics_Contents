char Incoming_value = 0;

const int ENA = 3;
const int ENB = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n");

    if (Incoming_value == '1')
    {
      Serial.println("forward");
      forward();
    }
    else if (Incoming_value == '2')
    {
      Serial.println("backward");
      backward();
    }
    else if (Incoming_value == '3')
    {
      Serial.println("left");
      left();
    }
    else if (Incoming_value == '4')
    {
      Serial.println("right");
      right();
    }
    else if (Incoming_value == '9')
    {
      Serial.println("rotote");
      rotate();
    }
    else if (Incoming_value == '5')
    {
      Serial.println("Light on");
      light();
    }

    else if (Incoming_value == '7')
    {
      Serial.println("Light off");
      dark();
    }
    else
      stopit();
  }
}

void forward()
{
  Serial.println("forward");
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
}

void backward()
{
  Serial.println("backward");
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}

void left()
{
  Serial.println("left");
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
}

void right()
{
  Serial.println("right");
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}

void rotate()
{
  Serial.println("rotating");
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(9, LOW);

  Serial.print("on pin 12 HIGH");
  //                    digitalWrite(5, LOW);
  //                    digitalWrite(4, HIGH);
  //                    digitalWrite(6, LOW);
  //                    digitalWrite(7, HIGH);
}

void light()
{
  Serial.println("light on");
  digitalWrite(8, HIGH);
  //  delay(100);
  //  digitalWrite(10,LOW);
}

void dark()
{
  Serial.println("light off");
  digitalWrite(8, LOW);
}

void stopit()
{
  Serial.println("stop");
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}
