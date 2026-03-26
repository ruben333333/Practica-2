const int pinLDR = 34;   // Entrada analógica correcta
const int pinLED = 2;    // Salida para LED

int valorLDR = 0;
int umbral = 2000;

void setup() {
  Serial.begin(115200);
  pinMode(pinLED, OUTPUT);
  Serial.println("Sistema iniciat...");
}

void loop() {
  valorLDR = analogRead(pinLDR);

  Serial.print("Valor LDR: ");
  Serial.println(valorLDR);

  if (valorLDR < umbral) {
    digitalWrite(pinLED, HIGH);
    Serial.println("⚠️ PERILL: poca llum!");
  } else {
    digitalWrite(pinLED, LOW);
    Serial.println("Llum correcta");
  }

  delay(2000);
}
