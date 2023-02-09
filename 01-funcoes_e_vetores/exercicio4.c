#include<stdio.h>
#include <locale.h>
#include <stdbool.h>
//TIA: 32216289 NOME: Mateus Kenzo Iochimoto TURMA: 3G

bool verificaPrimo(int num)
{
  setlocale(LC_ALL, "");
 int i, resultado = 0;

 for (i = 2; i <= num / 2; i++) 
    {
    if (num % i == 0) 
    {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    return true;
 else
    return false;
 
 return 0;
}

int main()
{
  int a,b,i;
  int cont = 0;
  printf("Digite o primeiro número do intervalo: ");
  scanf("%d", &a);
  printf("Digite o segundo número do intervalo: ");
  scanf("%d", &b);
  int size = b-a;
  int primos[size*2];
  //printf("%d", primos);
  for (i = a; i <= b; i++)
  {
    if (verificaPrimo(i) == true)
      printf("%d ", i);
  }
  //printf("%d", primos);
}