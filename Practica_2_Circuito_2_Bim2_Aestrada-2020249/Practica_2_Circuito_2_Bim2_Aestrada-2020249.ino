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
#define LedNaranja 4    //pin 4 conectado a un led
#define tiempo_espera 500   //tiempo entre estados del led

void setup()
{
  pinMode(LedNaranja, OUTPUT);  //Pin4 como salida.
  digitalWrite(LedNaranja, LOW); //LED conectado al pin 13 inicia apagado
}

void loop ()
{
  digitalWrite(LedNaranja, HIGH); //Enciende el led conectado al pin 4
  delay(tiempo_espera); //espera de 500 milisegundos
  digitalWrite(LedNaranja, LOW); //Apago el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
}
