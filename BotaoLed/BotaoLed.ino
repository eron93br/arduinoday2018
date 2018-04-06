/**
 * WORKSHOP FRANZININHO - ARDUINO DAY RECIFE 2018 - 07/04/2018
 * @eron93br (eron93@gmail.com)
 * Código para o módulo LED com Botão
 */

// variaveis que não mudam:
const int botaoPin = 0; // Pino do pushbutton, botão
const int ledPin =  1;  // Pino de LED

// variaveis que mudam:
int estadoBotao = 0;    // variável para ler o estado do botão

void setup() {
  // inicializa o pino do LED como saída
  pinMode(ledPin, OUTPUT);
  // inicializa o pino do botão como entrada
  pinMode(botaoPin, INPUT);
}

void loop() {
  // ler o estado do botão
  estadoBotao = digitalRead(botaoPin);

  // se o botão estiver pressionado a LED é acesa
  // Se não, é apagada
  if (estadoBotao == HIGH) {
    // ligar a LED
    digitalWrite(ledPin, HIGH);
  } else {
    // desligar a LED
    digitalWrite(ledPin, LOW);
  }
}

