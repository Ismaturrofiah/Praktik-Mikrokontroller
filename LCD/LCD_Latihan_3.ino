char datachar[]={'n', 'y', 'e', 'b', 'a', 'r', 'i', 'l', 'm', 'u', '.', 'c', 'o', 'm', '\n'};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i < sizeof(datachar); i++) {
  Serial.print(" Karakter : ");
  Serial.print(datachar[i]);
  Serial.print(", ASCII = ");
  Serial.print(datachar[i],DEC);
  Serial.print(", Oktal = ");
  Serial.print(datachar[i],OCT);
  Serial.print(", Heksa = ");
  Serial.print(datachar[i], HEX);
  Serial.print(", Biner = ");
  Serial.println(datachar[i], BIN);
  delay(300);
  }
Serial.end();
}
