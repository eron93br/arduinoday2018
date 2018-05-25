---
title: Exemplo - Sensor de luz com LDR
---


## Exemplo - Sensor de luz com LDR

Nesse exemplo vamos ler um sensor LDR usando a entrada analógica. Será exibido um exemplo de funcionamento de uma fotocélula, onde ao escurecer será aceso o LED, como acontece na luz da rua. ;)



### Materiais

- Placa Franzininho;
- Protoboard;
- 1 Resistor 10K;
- 1 LDR(10K)
- Jumpers



### Circuito



Faça a seguinte ligação no protoboard:



![](./image1.png)



Sketch

```c++
/*
  Franzininho
  Exemplo: Sensor de Luz - LDR

 Nesse exemplo vamos ler um sensor LDR usando a entrada analógica. Será exibido um exemplo de funcionamento de uma fotocélula, onde ao escurecer será aceso o LED, como acontece na luz da rua. ;)


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

```
