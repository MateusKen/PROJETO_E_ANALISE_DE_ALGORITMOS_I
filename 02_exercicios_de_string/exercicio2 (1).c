#include <stdio.h>
#include <string.h>
//NOME: Mateus Kenzo Iochimoto TIA: 32216289

/*2. Escreva um programa que leia três strings e as apresente em ordem lexicográfica crescente..*/

void compara3MaiorStr(char a[], char b[], char c[])
{
  char aux[20];
  if (strcmp(a,b) < 0){
    strcpy(aux,a);
    strcpy(a, b);
    strcpy(b, aux);
  }
  
  if(strcmp(b, c)<0){
    if (strcmp(a,c)<0){
      strcpy(aux, a);
      strcpy(a,c);
      strcpy(c, aux);
    }
    strcpy(aux, b);
    strcpy(b,c);
    strcpy(c, aux);
  }

}

int main(void) 
{
  char s1[20], s2[20], s3[20];
  scanf("%s %s %s", s1, s2 ,s3);
  compara3MaiorStr(s1,s2,s3);
  printf("%s %s %s", s1, s2, s3);
  return 0;
}