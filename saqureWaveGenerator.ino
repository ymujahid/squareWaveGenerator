void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int frequency = 50;
  float period = 1/frequency*1000;
  digitalWrite(2, HIGH);
//  delay(period/2);
  digitalWrite(3, LOW);
  delay(20/2);
  digitalWrite(2, LOW);
//  delay(period/2);
  digitalWrite(3, HIGH);
  delay(20/2);
}
