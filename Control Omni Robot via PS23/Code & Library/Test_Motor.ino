//const int EnA = 11;
void setup() {

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  //pinMode(6,OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  //pinMode(12,OUTPUT);
  //pinMode(13,OUTPUT);
}

void loop() {
  Maju();
  delay(1500);
  Stop();
  delay(3000);
  Kanan();
  delay(1500);
  Mundur();
  delay(1500);
  Kiri();
  delay(1500);
  
}


void Maju() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);

  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);

  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

}


void Mundur() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);

  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

}


void Kanan() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);

  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

}


void Kiri() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);

  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);

}

void Stop() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);

  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}
