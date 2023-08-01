void setup() 
{
pinMode(2,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() 
{
  int B = digitalRead(2);
  Serial.print(B);
}