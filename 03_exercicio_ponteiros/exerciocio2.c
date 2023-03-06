#include <stdio.h>
/*2. Escreva uma função XXX que converta minutos em horas-e-minutos. A função recebe um
inteiro mnts e os endereços de duas variáveis inteiras, digamos h e m, e atribui valores
a essas variáveis de modo que m seja menor que 60 e que 60 ∗ h + m seja igual a mnts.
Escreva também uma função main que use a função XXX.
*/

void xxx (int *mnts, int *h) {
  *h = *mnts/60;
  *mnts = *mnts%60;
}

void main(){
  int mnts = 1547, h;
  xxx(&mnts, &h);
  printf("%dh %dmin", h, mnts);
}
