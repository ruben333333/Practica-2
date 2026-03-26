const int pinT = 4; 

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Llegint temperatura...");
}

void loop() {
  int valor = analogRead(pinT);

  float voltatge = valor * (3.3 / 4095.0);

  float temperatura = voltatge * 100;  // CORREGIDO

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  delay(2000);
}
