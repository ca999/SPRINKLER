#include<SoftwareSerial.h>
SoftwareSerial BT(0,1);
int motor=3;
int led=13;
long a;
void setup()
{
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.println("Devise Activated");
  digitalWrite(3,0);
  digitalWrite(13,0);
}
void loop()
{
  if(Serial.available())
  {
    a=(BT.read());
    if(a=='m')
    {
      Serial.println("Sprinkler on");
      digitalWrite(13,1);
      digitalWrite(3,1);
    }
    if(a=='n')
    {
      digitalWrite(13,0);
      digitalWrite(3,0);
      Serial.println("Sprinkler off");
    }
  }
}
  
