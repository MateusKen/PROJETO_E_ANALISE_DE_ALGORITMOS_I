//NOME: Mateus Kenzo Iochimoto
//TIA: 32216289
/*
5. Escreva uma função recursiva que calcula o produto de a * b, em que a e b são inteiros maiores
que zero. considere que o produto pode ser definido como a somado a si mesmo b vezes, usando uma definição recursiva temos
a ∗ b = 
a, se b = 1
a ∗ b = a ∗ (b − 1) + a, se b > 1
*/
#include <stdio.h>

int ab(int a, int b)
{
  if (b == 1)
    return a;
  return ab(a, b-1) + a;
}

int main(void)
{
  printf("%d", ab(2, 4));
}

/*
ab(2, 4)
(ab(2, 3) + 2)
[(ab(2, 2) + 2) + 2]
{[(ab(2, 1) + 2) + 2] + 2}
2 + 2 + 2 + 2
8
*/