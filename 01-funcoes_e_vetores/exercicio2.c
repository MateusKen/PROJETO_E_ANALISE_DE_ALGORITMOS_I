#include <stdio.h>
#include <stdbool.h>
//TIA: 32216289 NOME: Mateus Kenzo Iochimoto TURMA: 3G

/*2. Escreva uma função chamado ultimoDigito() que receba dois inteiros a e b, não negativos
e devolve true se a e b tem os mesmos últimos dígitos. Por exemplo, 57 e 27, ambos têm
os últimos dígitos iguais a 7. Utilize a biblioteca stdbool.h para devolver booleano.*/

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
