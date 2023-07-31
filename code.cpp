void setup()
{
  //sets pin 7 to output
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int a = analogRead(A0);
  Serial.println(a);
  if(a<500){
    digitalWrite(7, LOW);
  	Serial.println("Light is off");
  }
  else {
    digitalWrite(7, HIGH);
  Serial.println("Light is on");
  }
}