void setup() {
  // put your setup code here, to run once:
for (int a = 5; a<14; a++)
{
pinMode(a,OUTPUT); 
}
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11,1);
digitalWrite(10,1);
digitalWrite(7,1);
delay(2000);
digitalWrite(12,1);
digitalWrite(9,1);
digitalWrite(6,1);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(7,0);
delay(2000);
digitalWrite(13,1);
digitalWrite(8,1);
digitalWrite(7,1);
digitalWrite(12,0);
digitalWrite(9,0);
digitalWrite(6,0);
delay(2000);
digitalWrite(12,1);
digitalWrite(9,1);
digitalWrite(6,1);
digitalWrite(13,0);
digitalWrite(8,0);
digitalWrite(7,0);
delay(2000);
digitalWrite(13,1);
digitalWrite(10,1);
digitalWrite(5,1);
digitalWrite(12,0);
digitalWrite(9,0);
digitalWrite(6,0);
delay(2000);
digitalWrite(12,1);
digitalWrite(9,1);
digitalWrite(6,1);
digitalWrite(13,0);
digitalWrite(10,0);
digitalWrite(5,0);
delay(2000);
digitalWrite(12,0);
digitalWrite(9,0);
digitalWrite(6,0);
}
