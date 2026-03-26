const int pinLDR = 34;        // Entrada analógica LDR
const int pinTemp = 4;        // Entrada analógica sensor de temperatura
const int pinLED = 2;         // LED salida

int valorLDR = 0;
float temperatura = 0.0;

void setup() {
  Serial.begin(115200);
  pinMode(pinLED, OUTPUT);
  Serial.println("=== Menú de l'usuari ===");
  mostrarMenu();
}

void loop() {
  if (Serial.available() > 0) {
    char opcion = Serial.read(); // Leer la opción del usuario

    switch (opcion) {

      case '1': {
        // Leer valor LDR
        valorLDR = analogRead(pinLDR);
        Serial.print("Valor LDR: ");
        Serial.println(valorLDR);
        break;
      }

      case '2': {
        // Leer y mostrar temperatura
        int valorTemp = analogRead(pinTemp);
        float voltatge = valorTemp * (3.3 / 4095.0);   // Convertir a voltaje
        temperatura = voltatge * 100;                  // Fórmula simplificada
        Serial.print("Temperatura: ");
        Serial.print(temperatura);
        Serial.println(" °C");
        break;
      }

      case '3': {
        // Encender LED
        digitalWrite(pinLED, HIGH);
        Serial.println("LED ENCÈS");
        break;
      }

      case '4': {
        // Apagar LED
        digitalWrite(pinLED, LOW);
        Serial.println("LED APAGAT");
        break;
      }

      case 'm':
      case 'M': {
        mostrarMenu();
        break;
      }

      default: {
        Serial.println("Opció no vàlida. Prem 'm' per mostrar menú.");
        break;
      }
    }

    // Limpiar buffer de entrada
    while (Serial.available() > 0) Serial.read();
  }
}

void mostrarMenu() {
  Serial.println("\nTria una opció:");
  Serial.println("1 -> Consultar valor LDR");
  Serial.println("2 -> Consultar temperatura");
  Serial.println("3 -> Encendre LED");
  Serial.println("4 -> Apagar LED");
  Serial.println("M -> Mostrar menú");
  Serial.println("------------------------");
}
