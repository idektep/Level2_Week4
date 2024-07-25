#define LDR_Pin 34
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LDR_Pin, ______);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(______);
  Serial.print("LDR:");
  Serial.println(______);
}





