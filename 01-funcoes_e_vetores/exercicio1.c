#include <stdio.h>
//TIA: 32216289 NOME: Mateus Kenzo Iochimoto TURMA: 3G

/*1. Escreva uma função que receba um número inteiro n, esse número não contém o digito 0
(zero), e devolve n invertido, exemplo: se N igual 123 a resposta será 321.*/

int invertNumber(int i) 
{
  int resultado = 0;
  
  while(i != 0)
  {
    resultado = resultado*10;
    resultado = resultado + (i%10);
    i = i/10;
    i = (int)i;
  }
  return resultado;
}

int main() 
{
  int i = 123;
  printf("%d", invertNumber(i));
}

