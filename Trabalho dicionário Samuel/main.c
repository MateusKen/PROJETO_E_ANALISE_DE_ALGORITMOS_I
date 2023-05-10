#include <stdio.h>

int main(){
  FILE *arquivo;
  arquivo = fopen("texto.txt", "r");
  char buffer[256];
  
  if (arquivo == NULL) // caso o arquivo referenciado não exista
    printf("Não foi possível encontrar o arquivo");
  else
  {
    while(strcmp(fgets(buffer, 256, arquivo), ".") != 0){
      char * token = strtok(buffer, " ");
      // loop through the string to extract all other tokens
      while( token != NULL ) {
        printf( "%s\n", token ); //printing each token
      
        token = strtok(NULL, " ");
    }
  }

  fclose(arquivo);
}}
