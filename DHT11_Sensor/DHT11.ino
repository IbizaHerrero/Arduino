//Código de lecturas del sensor DHT11 con LED indicador para
//interpretar el momento que se produce una lectura de datos.

// Llamada a la libreria del sensor de temperatura.
// Declaración del PIN del sensor y su tipo.
#include "DHT.h"
DHT dht(7, DHT11);

//PIN de salida declarado para encender un LED.
//Conexión con puerto serie e inicio del sensor.
void setup() {
pinMode(13, OUTPUT); 
Serial.begin(9600);
dht.begin();
}

void loop() {
//Lectura de datos a las variables.
float hum = dht.readHumidity();
float temp = dht.readTemperature();

//Se muestran los datos por el puerto serial.
Serial.println("Humedad(%): "); Serial.println(hum);
Serial.println("Temperatura(*c): "); Serial.println(temp);
//Encendido de LED de lectura sucedida.
digitalWrite(13, HIGH);
delay(10000);
//Apagado de LED, con delay para el comienzo de otra lectura.
digitalWrite(13, LOW);
delay(10000);
}
