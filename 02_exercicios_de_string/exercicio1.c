#include <stdio.h>
#include <string.h>
//NOME: Mateus Kenzo Iochimoto TIA: 32216289

/*1. Escreva um programa que leia três strings (vetor de caracteres) e encontre a maior lexicograficamente.*/

void comparaMaiorStr(char a[], char b[], char c[], char maior[]){
  if (strcmp(a,b) > 0)
    strcpy(maior, a);
  else
    strcpy(maior, b);
  if (strcmp(maior, c)< 0)
    strcpy(maior, c);

}

int main(void) {
  char s1[20], s2[20], s3[20], maior[20];
  scanf("%s %s %s", s1, s2 ,s3);
  comparaMaiorStr(s1,s2,s3,maior);
  printf("%s", maior);
  return 0;
}
