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
int a=0;
int b=7;
while(a<8)
{
digitalWrite(a,HIGH);
digitalWrite(b-a,HIGH);
delay(d);
digitalWrite(a,LOW);
digitalWrite(b-a,LOW);

a++;
}
}
