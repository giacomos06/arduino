// imposta su high il pin 8 per alcuni secondi
//Created by Giacomo Santini

int pin = 8;
int h = 6;
long t = 0;
// impostare il numero di secondi a cui accendere il pin 8(in millisecondi)
long tempo = 10800000;
//impostare il numero di secondi a cui spegere il pin 8 (in millisecondi)
long tempolimite=10810000; 
long t0;



void setup() {
t0=millis();
pinMode(pin,OUTPUT);
  

}

void loop() {
t=millis();
long deltat = t-t0;

if (deltat>tempo){
digitalWrite(pin,HIGH); 
 
  }
if(deltat>tempolimite){
  
 digitalWrite(pin,LOW); 
  
  
  }

  
}
