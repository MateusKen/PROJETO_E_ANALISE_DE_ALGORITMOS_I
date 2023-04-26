//NOME: Mateus Kenzo Iochimoto
//TIA: 32216289
#include <stdio.h>

int an(int a, int n)
{
  if (n == 0)
    return 1;
  return a*an(a, n-1);
}

int main(void)
{
  printf("%d", an(2, 4));
}

/*
an(2, 4)
2*an(2, 3)
2*2*an(2, 2)
2*2*2*an(2, 1)
2*2*2*2*an(2, 0)
2*2*2*2*1
16
*/