#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void tolowerCase(char *palavra[])
{
  for (int i = 0; i <= strlen((*palavra)); i++) 
    (*palavra)[i] = tolower((*palavra)[i]);
}

int buscaBinaria()
{
  
}

int insercaoRecursiva()
{
  
}

int main()
{
  FILE *arquivo;
  arquivo = fopen("texto.txt", "r");
  char buffer[256]; // cria string que vai receber cada linha do texto
  char **palavras;
  palavras = malloc(sizeof(char*)*100); // alocando um vetor de char com 100 posições
  
  if (arquivo == NULL) // caso o arquivo referenciado não exista
    printf("Não foi possível encontrar o arquivo");
  else
  {
    while(strcmp(fgets(buffer, 256, arquivo), ".") != 0) // lê as linhas do arquivo de texto e para quando achar "."
    { 
      buffer[strlen(buffer)-1] = 0; // tira o \n
      char * token = strtok(buffer, " "); // faz o split() da string por " "
      while( token != NULL ) 
      {
        tolowerCase(&token);
        /*
        alocação dinamica da palavra no vetor
        palavras[indice]=malloc(sizeof(char)*strlen(token));
        */
        
        printf( "%s\n", token ); //printa cada palavra
        token = strtok(NULL, " "); // vai para próxima palavra
      }
    }

  fclose(arquivo);
  }
}
