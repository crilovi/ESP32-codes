// Semáforo con ESP32


int ledRojo = 25;
int ledAmarillo = 26;
int ledVerde = 27;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {

  digitalWrite(ledRojo, HIGH);
  delay(3000); 
  digitalWrite(ledRojo, LOW);


  digitalWrite(ledVerde, HIGH);
  delay(4000); 


  for (int i = 0; i < 3; i++) {
    digitalWrite(ledVerde, LOW);
    delay(400); 
    digitalWrite(ledVerde, HIGH);
    delay(400); 
  }
  digitalWrite(ledVerde, LOW); 


  digitalWrite(ledAmarillo, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo, LOW);
}
