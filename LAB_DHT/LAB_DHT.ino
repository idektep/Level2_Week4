#include <DHT.h>
#define DHTPIN ___  //pin DHT 23

#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  ////// รับค่า  Sensor DHT
  float humi = dht.readHumidity();     //รับค่าความชื้น
  float temp = dht.readTemperature();  //รับค่าอุณหภูมิ
  Serial.print("Humidity : ");
  Serial.println(_____);
  Serial.print("Temperature : ");
  Serial.println(_____);
  delay(1000);
}





