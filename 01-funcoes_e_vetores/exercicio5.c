#include<stdio.h>
//TIA: 32216289 NOME: Mateus Kenzo Iochimoto TURMA: 3G

int main()
{
  int i, soma = 0;
  int array[] = {1,2,3,4,5,6};
  size_t size = sizeof(array)/ sizeof(array[0]);
  for (i = 0; i <= size; i++)
    {
    if (array[i]%2 == 0)
      soma += array[i];
    }
  printf("%d", soma);
}