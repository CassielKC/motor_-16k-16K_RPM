#define E1 8  
#define I1 10     
#define I2 9     


void setup()
{
        pinMode(8,OUTPUT);
 		pinMode(9,OUTPUT);
		pinMode(10,OUTPUT);
  		pinMode(A0,INPUT);
}
void loop()
{
  		int val;
  		val=analogRead(A0);
  		val = map(val, 0, 1023, 0, 250);
  if(val<130&&val>120)
  {
    digitalWrite(E1, LOW);
  }
  else
  {
    if(val<124)
    {
      digitalWrite(E1, HIGH);     
      analogWrite(I1, val+250);     
      analogWrite(I2, 0);
    }
    else
    {
      if(val>124)
      {
        digitalWrite(E1, HIGH);     
      	analogWrite(I1, 0);     
      	analogWrite(I2, val);
      }
    }
  }
}