#include <stdio.h>

/*1. Para cada item, escreva uma função que receba um vetor v de números inteiros, e uma variável n que indica o tamanho do vetor e determina:*/

// a) o maior número da lista;
int findMaiorNum(int v[], int n)
{
  int maior;
  for(int i = 0; i<=n; i++)
    {
      if (i == 0)
        maior = v[0];
      else
        if (v[i]>maior)
          maior = v[i];
    }
  return maior;
}

//b) o menor número da lista;
int findMenorNum(int v[], int n)
{
  int menor;
  for(int i = 0; i<=n; i++)
    {
      if (i == 0)
        menor = v[0];
      else
        if (v[i]<menor)
          menor = v[i];
    }
  return menor;
}

//c) a quantidade de números pares da lista;
int findQuantPares(int v[], int n)
{
  int pares = 0;
  for(int i = 0; i<=n; i++){
    if (v[i]%2 == 0)
      pares++; 
  }
  return pares;
}

//d) a média dos números contidos na lista;
float findMediaArray(int v[], int n)
{
  int cont = 0;
  for(int i = 0; i<=n; i++){
    cont = cont + v[i];
  }
  float media = cont/n;
  return media;
}

//e) todos os números menores do que a média calculada no item anterior. Neste item, apenas imprima os valores na tela.
void findMenorQueMedia(int v[], int n)
{
  int media = findMediaArray(v,n);
  for(int i = 0; i<=n; i++){
    if(v[i]<media)
      printf("%d", v[i]);
  }
}

int main(void) {
  int v[4] = {1,3,9,7};
  int n = 4;
  printf("A) %d\n", findMaiorNum(v,n));
  printf("B) %d\n", findMenorNum(v,n));
  printf("C) %d\n", findQuantPares(v,n));
  printf("D) %.2f\n", findMediaArray(v,n));
  printf("E) ");findMenorQueMedia(v,n);
  return 0;
}
