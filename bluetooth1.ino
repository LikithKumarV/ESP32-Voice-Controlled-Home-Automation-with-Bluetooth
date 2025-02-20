#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
String voice;
int light = 33, fan = 15, tv = 18;

void everythingon() 
{
  digitalWrite(light, HIGH);
  digitalWrite(fan, HIGH);
  digitalWrite(tv, HIGH);
}
void lighton()
{
  digitalWrite(light, HIGH);
}

void fanon()
{
  digitalWrite(fan, HIGH);
}

void tvon()
{
  digitalWrite(tv, HIGH);
}
void everythingoff() 
{
  digitalWrite(light, LOW);
  digitalWrite(fan, LOW);
  digitalWrite(tv, LOW);
}
void lightof()
{
  digitalWrite(light, LOW);
  
}

void fanof()
{
  digitalWrite(fan, LOW);
}
void tvof()
{
  digitalWrite(tv, LOW);
}
void setup() 
{
  Serial.begin(9600);
  SerialBT.begin("IOT");
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(tv, OUTPUT);
}
void loop()
{
  while(SerialBT.available())
  {
    delay(10);
    char c = SerialBT.read();
    if(c == '#')
    {
      break;
    }
    voice += c;
  }
  if(voice.length() > 0)
  {
    Serial.println(voice);
    if(voice == "everything on") 
    {
      everythingon();
    }
    else if(voice == "light on")
    {
      lighton();
    }
    else if(voice == "fan on")
    {
      fanon();
    }
     else if(voice == "TV on")
    {
      tvon();
    }
    else if (voice == "everything off")
    {
      everythingoff();
    }
    else if(voice == "light off")
    {
      lightof();
    }
     else if(voice == "fan off")
    {
      fanof();
    }
     else if(voice == "TV off")
    {
      tvof();
    }
    voice = "";
  }
}