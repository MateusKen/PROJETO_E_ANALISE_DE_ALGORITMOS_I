#include <stdio.h>
/*4. Escreva uma função yyy que recebe três parâmetros inteiros (hora, minutos, soma_minutos)
os dois primeiros representando uma determinada hora no formato horas:minutos e o parâmetro soma_minuto é o valor que será adicionado a hora:minutos. A sua função faz a
soma da horas:minutos com o parâmetro soma_minutos e devolve a hora atualizada.
*/

void yyy (int *horas, int *min, int soma_minutos) {
  *min += (*horas*60)+soma_minutos;
  *horas = *min/60;
  *min = *min%60;
}

void main(){
  int horas = 3, min = 20, soma_minutos = 45;
  printf("Eram %dh%dmin, e com a adição de %dmins....", horas,min,soma_minutos);
  yyy(&horas, &min, soma_minutos);
  printf("\nAgora são %dh%dmin", horas, min);
}
