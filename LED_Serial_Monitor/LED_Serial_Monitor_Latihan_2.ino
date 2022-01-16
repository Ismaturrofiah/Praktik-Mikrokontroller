void setup() {
  // put your setup code here, to run once:
  for (int a = 6; a < 14; a++)
  {
    pinMode(a,OUTPUT);
  }
  Serial.begin(9600);
  Serial.flush();
}

void loop() {
  // put your main code here, to run repeatedly:
  String input = "";

  while (Serial.available() > 0)
  {
    input = Serial.readStringUntil('\n');
  }
  if (input == "UP")
  {
    for (int b = 6; b < 14; b++)
    {
     digitalWrite(b,HIGH);
     delay(500);
     digitalWrite(b,LOW); 
    }
  }
  if (input == "DOWN")
  {
    for (int c = 13; c > 5; c--)
    {
      digitalWrite(c,HIGH);
      delay(500);
      digitalWrite(c,LOW);
    }
  }
}
