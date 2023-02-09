#include <stdio.h>
#include <stdbool.h>
//TIA: 32216289 NOME: Mateus Kenzo Iochimoto TURMA: 3G

int ultimoDigito(int a, int b)
{
  int lda, ldb;
  lda = a%10;
  ldb = b%10;

  if (lda == ldb)
    return true;
  
  return false;
}

int main()
{
  int a = 57;
  int b = 27;
  if (ultimoDigito(a,b) == true)
    printf("true");
  else
    printf("false");
}