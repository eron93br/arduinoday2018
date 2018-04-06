// A funcao setup eh executada apenas uma vez, assim que
// o microcontrolador liga ou quando vc pressiona RESET
void setup() {
  // Configura o Pino Digital (1) como OUTPUT (SAIDA!)
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT); // emular GND
  pinMode(3, OUTPUT); // emular VCC
}

//////////
// LOOP //
//////////
// Superloop, esta funcao fica sempre rodando forever...
// Onde deve ser colocado o programa principal
void loop() {
  digitalWrite(2, LOW);   // setar a Porta Digital 2 como GROUND
  digitalWrite(3, HIGH);  // setar a Porta Digital 3 como VCC

  // Realiza leitura da porta analogica
  int portaAnalogica = analogRead(A2);

  // pisca led/aciona buzzer com delay definido pela leitura digital
  digitalWrite(1, HIGH);    // liga o LED (pino 1) (HIGH is the voltage level)
  delay(portaAnalogica);    // espera o tempo correspondente a leitura da porta analogica
  digitalWrite(1, LOW);     // desliga o LED (pino 1) - LOW!
  delay(portaAnalogica);    // espera o tempo correspondente a leitura da porta analogica
}

