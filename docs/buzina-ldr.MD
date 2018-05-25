## Exemplo - Buzzer com LDR

Nesse exemplo vamos ler um sensor LDR usando a entrada analógica. Em seguida, o valor lido será utilizado como argumento do delay para acionamento do buzzer (buzina). Poderemos assim, variar a frequencia e tocar uma especie de musica. :)


### Materiais

- Placa Franzininho;
- Protoboard;
- 1 Buzzer;
- 1 LDR(10K);
- Jumpers.


### Circuito

Faça a seguinte ligação no protoboard:

![](./image1.png)

Sketch

```c++
/*
  Codigo utilizado no Arduino Day Recife 2018 - Realizado por: Eronides Neto (github.com/eron93br) e Rodrigo Alves
  Exemplo: Buzzer - LDR

 Nesse exemplo vamos ler um sensor LDR usando a entrada analógica. Será exibido um exemplo de funcionamento de uma fotocélula, onde ao escurecer será aceso o LED, como acontece na luz da rua. ;)


*/

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
  // Realiza leitura da porta analogica
  int portaAnalogica = analogRead(A2);

  // pisca led/aciona buzzer com delay definido pela leitura digital
  digitalWrite(1, HIGH);    // liga o LED (pino 1) (HIGH is the voltage level)
  delay(portaAnalogica);    // espera o tempo correspondente a leitura da porta analogica
  digitalWrite(1, LOW);     // desliga o LED (pino 1) - LOW!
  delay(portaAnalogica);    // espera o tempo correspondente a leitura da porta analogica
}


```
