//NOME: Mateus Kenzo Iochimoto
//TIA: 32216289
/*
3. Escreva um algoritmo para contar e retornar a profundidade da recursão da função Fibonacci.
Problema inspirado em:
https://www.beecrowd.com.br/judge/pt/problems/view/1029?origem=1
*/
#include <stdio.h>

int fibo(int n, int *cont){
  (*cont)++; // incrementa o contador sempre que a função de fibo for chamada
  if (n <= 1)
    return n;
  return fibo(n-1, cont) + fibo(n-2, cont);
}

int main(void) {
  int cont = 0; // contador de profundidade da função
  printf("o fibonacci desse numero é igual a: %d\no número de vezes que a função foi chamada foi: %d\n",fibo(4, &cont), cont);
}

/*
fibo(4)
fibo(3) + fibo(2)
(fibo(2) + fibo(1)) + (fibo(1) + fibo(0))
[(fibo(1) + fibo(0)) + fibo(1)] + (fibo(1) + fibo(0))
[(1 + 0) + 1] + (1 + 0)
3
*/
