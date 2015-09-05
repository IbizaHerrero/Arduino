//Código de control de Higrómetro analógico.
void setup() {
Serial.begin(9600);
}

void loop() {
  //Lectura de entrada analógica y conversión de los datos.
  //Salida de la conversión por el puerto serial, y retardo de 5
  //segundos para la próxima lectura.
int sensorValue=map(analogRead(A0),0,1023,100,0);
Serial.println("Humedad(%): "); Serial.println(sensorValue);
delay(5000);
}
