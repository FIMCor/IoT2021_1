
int nPersonas = 0;
String Practica1 = "Hola Mundo";

void setup() {
  Serial.begin(9600);
  delay (250);
  Serial.println(Practica1);
  delay(2000);
  Serial.println("Variables");
}

void loop() {
  nPersonas = nPersonas +1;
  Serial.println("Contant -> " + String(nPersonas));
  delay(1000);
}
