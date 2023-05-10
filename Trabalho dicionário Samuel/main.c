#include <stdio.h>

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
        printf( "%s\n", token ); //printa cada palavra
      
        token = strtok(NULL, " "); // vai para próxima palavra
      }
    }

  fclose(arquivo);
  }
}
