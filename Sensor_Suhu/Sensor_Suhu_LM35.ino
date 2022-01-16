const int pinSuhu = A1;
float suhu, data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinSuhu, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  data = analogRead(pinSuhu);
  suhu = data * 0.48828125;

  if (suhu >= 60)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);  
  }
  if (suhu >= 27 && suhu < 60)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);  
  }
  if (suhu < 27)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);  
  }
}
