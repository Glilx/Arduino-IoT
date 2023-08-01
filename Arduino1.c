char L = '1',B;
int LED = 8; 
bool state = 0;
 
void setup() 
{
   pinMode(LED, OUTPUT);
   Serial.begin(9600);

}

void loop()
{
   if(Serial.available())
   {
      char B = Serial.read();
      if (L == '1' && B == '0') 
      { 
        state=!state;
        digitalWrite(LED, state);        
      }
       L=B;
   }
}