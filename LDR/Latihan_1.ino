#define PINLDR 1
#define LED 11
int sensorLDR = 0;
int output = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorLDR = analogRead(PINLDR);
output = map(sensorLDR, 0, 1023, 0, 20);
if(output <= 2){
  digitalWrite (LED,HIGH);}
else{
  digitalWrite(LED,LOW);}
delay(500);
}
