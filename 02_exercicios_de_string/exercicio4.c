#include <stdio.h>
// NOME: Mateus Kenzo Iochimoto TIA: 32216289

/*4. Escreva uma função que recebe um vetor de caractere e um caracter, a função remove
todas as ocorrências do caracter na string sem deixar buracos.*/

void removeChar(char palavra[], char character[]){
    int i, j;
    int len = strlen(palavra);
    for(i=0; i<=len; i++)
    {
        if(palavra[i] == character)
        {
            for(j=i; j<len; j++)
                palavra[j] = palavra[j+1];
            len--;
            i--;
        }
      }
}

int main(void) 
{
  char palavra[10] = "batata";
  removeChar(palavra, "a");
  printf("%s", palavra);
  return 0;
}
