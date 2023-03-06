#include <stdio.h>
/*1. Por que o código abaixo está errado?*/

void troca (int *x, int *y) {
int *temp;
*temp = *x;
*x = *y;
*y = *temp;
}

void main(){
  int x = 4, y = 5;
  troca(&x,&y);
  printf("x = %d, y = %d", x,y);
}
// o código está errado porque *temp não é pra ser um ponteiro
// sendo assim ele não troca globalmente as variáveis
