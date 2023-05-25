int potPin = A0;    // el pin analógico donde está conectado el potenciómetro
int motorPin1 = 5;  // el primer pin digital conectado al puente H
int motorPin2 = 6;  // el segundo pin digital conectado al puente H
int velocidad = 0;  // la variable para almacenar la velocidad del motor

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  velocidad = analogRead(potPin);  // lee el valor del potenciómetro
  velocidad = map(velocidad, 0, 1023, 0, 255);  // mapea el valor a un rango de 0 a 255
  analogWrite(motorPin1, velocidad);  // escribe la velocidad en uno de los pines del puente H
  analogWrite(motorPin2, 0);  // escribe 0 en el otro pin para que el motor gire en una dirección
}
  
