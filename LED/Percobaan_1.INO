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
int a = 0;
while (a<14)
{
digitalWrite(a,HIGH);
delay(d);
digitalWrite(a,LOW);

digitalWrite(14-a,HIGH);
delay(d);
digitalWrite(14-a,LOW);

a++;
}
}
