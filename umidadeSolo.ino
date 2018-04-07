/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

int TERRA_VIRTUAL = 0;
int LED1 = 1;
int LED2 = 2;

// the setup routine runs once when you press reset:
void setup() 
{
  pinMode(TERRA_VIRTUAL, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() 
{
  digitalWrite(TERRA_VIRTUAL, LOW);  // coloca em low o terra virtual! 
  digitalWrite(LED2, LOW);           // inicia tanto o LED 1 quanto o 2 no comeco do LOOP como lOW...
  digitalWrite(LED1, LOW);
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  
  if(sensorValue > 400)
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(2, HIGH); 
  }
  
   delay(sensorValue);        // delay baseado na leitura?
   // delay(100); 
}
