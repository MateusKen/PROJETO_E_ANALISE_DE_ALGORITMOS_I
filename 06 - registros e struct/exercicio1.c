//NOME: MATEUS KENZO IOCHIMOTO TIA: 32216289
/*
1. Escreva uma função que recebe dois parâmetros, um número inteiro representando um
tempo em minutos e um tempo armazenado na estrutura typedef struct tempo representando um tempo em horas:minutos. A função calcula a soma tempo em minuto (parâmetro inteiro) com o tempo armazenado na estrutura, ao final o tempo atualizado é
devolvido pela função. Por exemplo se for informado 71 minutos e 3h:15m a função deve
devolver o tempo na estrutura de 4h:26m.
*/
#include <stdio.h>

typedef struct {
int horas;
int minutos;
} tempo;

void somaTempo(int hem, tempo *horario){
  (*horario).horas += (*horario).minutos/60 + hem/60;
  (*horario).minutos = (*horario).minutos%60 +hem%60;
}

int main(void) {
  tempo horario;

  horario.horas = 3;
  horario.minutos = 15;

  somaTempo(71, &horario); //resposta: 4:26

  printf("%d:%d", horario.horas, horario.minutos);
}
