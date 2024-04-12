/*
  Fundacion Kinal
    Centro educativo tecnico laboral kinal 
    Quinto perito
    Quinto electronica
    Codigo Tecnico: EB5AM
    Curso: Taller de electronica digital y reparacion de computadoras I
    Dev: Almn. Alvaro Angel Gabriel Estrada Morakes
    Fecha: 12 de abril
*/

//Directivas del preprocesador
#define push_button 2 //Push button conectado al pin 2
#define led 3

void setup() {
  pinMode(push_button, INPUT); //Pin 2 como entra
  pinMode(led, OUTPUT);
  Serial.begin(9600);     //Inicio la comunicacion serial
  Serial.println("Lectura de un pulsador"); //Envio el texto entre comillas al puerto serie
}
void loop() {
  //Variable local, que se encarga de almacenar el valor (abierto o cerrado)
  //del pulsador conectado al pin 2
  bool estado_boton = digitalRead(push_button);
  if (estado_boton == HIGH) //¿He presionado el interruptor?
  {
    //si lo he presionado
    digitalWrite(led, LOW); //apago el led
  } else {
    //si no lo he presionado
    digitalWrite(led, HIGH); //mantengo encendido el led }
  }
}  

}
