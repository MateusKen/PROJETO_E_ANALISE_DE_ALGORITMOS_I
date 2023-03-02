#include <stdio.h>
#include <string.h>
//NOME: Mateus Kenzo Iochimoto TIA: 32216289

/*3. Escreva uma função que decida se uma vetor de caracter é ou não um palíndromo (ou
seja, se o inverso do vetor é igual a ele). Escreva um programa para testar a função.*/

const char* verificaPalindromo(char palavra[])
{
  int size = strlen(palavra);
  int cont = 0;
  for (int i = size; i != 0; i--){
    if (palavra[cont] != palavra[i-1])
      return "Não é um Palíndromo";
    cont++;
  }
  return "É um Palíndromo";
}

int main(void) 
{
  printf(verificaPalindromo("aba"));
}