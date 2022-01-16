void setup() {
  // put your setup code here, to run once:
  for (int a = 6; a < 14; a++)
  {
    pinMode(a,OUTPUT);
  }
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Ketik angka 1 untuk menyalakan LED 1, angka 2 untuk LED 2, dan seterusnya");
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
{
  int state = Serial.parseInt();
  if (state == 1)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
  }
  if (state == 2)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
  }
  if (state == 3)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
  }
  if (state == 4)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
  }
  if (state == 5)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
  }
  if (state == 6)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
  }
  if (state == 7)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
  }
  if (state == 8)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
  }
}
}
