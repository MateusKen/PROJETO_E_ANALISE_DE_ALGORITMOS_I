// NOME: Mateus Kenzo Iochimoto TIA: 32216289
/*
1. Os números de Tribonacci são definidos pela seguinte recursão:
f(n) =
0 se n = 0
0 se n = 1
1 se n = 2
f(n − 1) + f(n − 2) + f(n − 3) se n > 2
Implemente um método recursivo que receba por parâmetro um número inteiro positivo
N e mostre e retorne o N-ésimo número da sequência de Tribonacci. Qual é a complexidade de tempo do seu algoritmo?
*/

#include <stdio.h>

int tribo(int n){
  if (n <= 1) return 0;
  if (n == 2) return 1;
  return tribo(n-1) + tribo (n-2) + tribo(n-3);
}

int main(void) {
  printf("%d", tribo(5));
}

/*
tribo(5) 1x
    |
tribo(4)+tribo(3)+tribo(2) 3x
    |                    |              |
tribo(3)+tribo(2)+tribo(1)+tribo(2)+tribo(1)+tribo(0) + 1  9x
    |           |         |              |
tribo(2) + tribo(1) + tribo(0) + 1 + 1 + 0 + 1   27x
    |              |              |
    1              1              0
O(3^n-1) => O(3^n)
*/
