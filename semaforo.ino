int Ledrojo =8;
int Ledamarillo =9;
int Ledverde =10;
//int tiempoAnterior = 0;

unsigned long tiempoAnterior = 0;
int estado = 0;

void setup() {
  pinMode(Ledrojo, OUTPUT);
   pinMode(Ledamarillo, OUTPUT);
    pinMode(Ledverde, OUTPUT);
  

}

void loop() {
  unsigned long tiempoActual = millis();

  if(estado==0 && tiempoActual - tiempoAnterior >=5000){
    digitalWrite(Ledrojo, LOW);
     digitalWrite(Ledverde, HIGH);
     estado=1;
     tiempoAnterior = tiempoActual;
  }
  if(estado==1 && tiempoActual - tiempoAnterior >=5000){
    digitalWrite(Ledverde, LOW);
     digitalWrite(Ledamarillo, HIGH);
     estado=2;
     tiempoAnterior = tiempoActual;

}
if(estado==2 && tiempoActual - tiempoAnterior >=5000){
    digitalWrite(Ledrojo, LOW);
     digitalWrite(Ledverde, HIGH);
     estado=0;
     tiempoAnterior = tiempoActual;
     }

     if(estado==0){
      digitalWrite(Ledrojo, HIGH);
      
     }
}