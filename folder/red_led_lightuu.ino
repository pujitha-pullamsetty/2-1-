 const int LED=13;
 void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available())
{
  char p=Serial.read();
  if (p=='2')
  {
    digitalWrite(13,1);
  }
  else if (p=='3')
{
  digitalWrite(13,0);
}
  
}
}
