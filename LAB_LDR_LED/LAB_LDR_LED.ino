#define L_LED 16
#define R_LED 17
#define LDR_Pin 34
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LDR_Pin, INPUT);
  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);
  delay(500);
}
void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(LDR_Pin);
  Serial.print("LDR: ");
  Serial.println(val);

  if(val > 3000){
    digitalWrite(L_LED, ___);
    digitalWrite(R_LED, ___);
    Serial.println("LED ON ");
    delay(500);
  }
   else{
    digitalWrite(L_LED, ____);
    digitalWrite(R_LED, ____);
    Serial.println("LED OFF ");
    delay(500);
   }
}
