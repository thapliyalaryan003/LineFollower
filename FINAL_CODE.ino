void setup() {
  pinMode(13, OUTPUT);  // Motor A +
  pinMode(12, OUTPUT);  // Motor A-
  pinMode(11, OUTPUT);  // Enable 1&2
  pinMode(10, OUTPUT);  // Enable 3&4
  pinMode(9, OUTPUT);   // Motor B -
  pinMode(8, OUTPUT);   // Motor B +
  pinMode(6, INPUT);    // L1
  pinMode(5, INPUT);    // L2
  pinMode(4, INPUT);    // M
  pinMode(3, INPUT);    // R2
  pinMode(2, INPUT);    // R1
}

void loop() {
  if ((digitalRead(6) == 1) && (digitalRead(5) == 1) && (digitalRead(4) == 0) && (digitalRead(3) == 1) && (digitalRead(2) == 1))
    ;
  { forward(); }
  if ((digitalRead(6) == 0) && (digitalRead(5) == 0) && (digitalRead(4) == 0) && (digitalRead(3) == 0) && (digitalRead(2) == 0))
    ;
  { forward(); }  // calling functions
  if ((digitalRead(6) == 1) && (digitalRead(5) == 0) && (digitalRead(4) == 0) && (digitalRead(3) == 0) && (digitalRead(2) == 1))
    ;
  { forward(); }
  if ((digitalRead(6) == 1) && (digitalRead(5) == 1) && (digitalRead(4) == 1) && (digitalRead(3) == 1) && (digitalRead(1) == 1))
    ;
  { backward(); }
  if ((digitalRead(6) == 1) && (digitalRead(5) == 0) && (digitalRead(4) == 0) && (digitalRead(3) == 1) && (digitalRead(3) == 1))
    ;
  { left_s(); }
  if ((digitalRead(6) == 0) && (digitalRead(5) == 0) && (digitalRead(4) == 0) && (digitalRead(3) == 1) && (digitalRead(3) == 1))
    ;
  { left_f(); }
  if ((digitalRead(6) == 0) && (digitalRead(5) == 0) && (digitalRead(4) == 1) && (digitalRead(3) == 1) && (digitalRead(3) == 1))
    ;
  { left_f(); }
  if ((digitalRead(6) == 0) && (digitalRead(5) == 1) && (digitalRead(4) == 1) && (digitalRead(3) == 1) && (digitalRead(3) == 1))
    ;
  { left_f(); }
  if ((digitalRead(6) == 1) && (digitalRead(5) == 0) && (digitalRead(4) == 1) && (digitalRead(3) == 1) && (digitalRead(3) == 1))
    ;
  { left(); }
  if ((digitalRead(6) == 1) && (digitalRead(5) == 1) && (digitalRead(4) == 0) && (digitalRead(3) == 0) && (digitalRead(3) == 1))
    ;
  { right_s(); }
  if ((digitalRead(6) == 1) && (digitalRead(5) == 1) && (digitalRead(4) == 0) && (digitalRead(3) == 0) && (digitalRead(3) == 0))
    ;
  { right_f(); }
  if ((digitalRead(6) == 1) && (digitalRead(5) == 1) && (digitalRead(4) == 1) && (digitalRead(3) == 0) && (digitalRead(3) == 1))
    ;
  { right(); }
  if ((digitalRead(6) == 1) && (digitalRead(5) == 0) && (digitalRead(4) == 1) && (digitalRead(3) == 0) && (digitalRead(2) == 1))
    ;
  { left_s(); }
}

// Declaring Functions
void forward() {
  analogWrite(11, 50);
  analogWrite(10, 50);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(600);
}
void backward() {
  analogWrite(11, 50);
  analogWrite(10, 35);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(600);
}
void left_s() {
  analogWrite(11, 25);
  analogWrite(10, 35);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(600);
}
void left_f() {
  analogWrite(11, 35);
  analogWrite(10, 35);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(600);
}
void left() {
  analogWrite(11, 17);
  analogWrite(10, 35);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(600);
}
void right_s() {
  analogWrite(11, 35);
  analogWrite(10, 25);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(600);
}
void right_f() {
  analogWrite(11, 35);
  analogWrite(10, 35);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(600);
}
void right() {
  analogWrite(11, 17);
  analogWrite(10, 35);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(600);
}
