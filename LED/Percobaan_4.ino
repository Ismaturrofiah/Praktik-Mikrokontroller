int d = 100;
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
int b = 7;
while(a<8)
{
  digitalWrite(a,HIGH);
  delay(d);
  digitalWrite(a,LOW);

  digitalWrite(b-a,HIGH);
  delay(d);
  digitalWrite(b-a,LOW);

  a++;
}
int e = 3;
int f = 4;
for(int c = 0; c<4; c++)
{
  digitalWrite(e-c,HIGH);
  digitalWrite(f+c,HIGH);
  delay(d);
  digitalWrite(e-c,LOW);
  digitalWrite(f+c,LOW);
}
delay(500);
}
