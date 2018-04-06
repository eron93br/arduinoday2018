
// A funcao setup eh executada apenas uma vez, assim que o microcontrolador liga ou quando vc 
// pressiona RESET

///////////
// SETUP //
///////////
void setup() 
{
  // Configura o Pino Digital (1) como OUTPUT (SAIDA!)
  pinMode(1, OUTPUT);
}

///////////
// LOOP //
// Superloop, esta funcao fica sempre rodando forever... Onde deve ser colocado o programa principal
void loop() 
{
  digitalWrite(1, HIGH);    // liga o LED (pino 1) (HIGH is the voltage level)
  delay(5000);              // espera 5s
  digitalWrite(1, LOW);     // desliga o LED (pino 1) - LOW!
  delay(5000);              // espera 5s
}
