int d=100;
void setup() {
  // put your setup code here, to run once:
for (int a = 0; a<8; a++)
{
pinMode(a,OUTPUT); 
}
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(d);
digitalWrite(0,LOW);
digitalWrite(1,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
delay(d);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);

digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(d);
digitalWrite(0,LOW);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);

digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(d);
digitalWrite(0,LOW);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);

digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(d);
digitalWrite(0,LOW);
digitalWrite(1,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);

digitalWrite(0,HIGH);
digitalWrite(7,HIGH);
delay(d);
digitalWrite(0,LOW);
digitalWrite(7,LOW);
}
