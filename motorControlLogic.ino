    int motorPin = 3;
  void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("hello jen");
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.print("boo\n");
   digitalWrite(motorPin, HIGH);

}
