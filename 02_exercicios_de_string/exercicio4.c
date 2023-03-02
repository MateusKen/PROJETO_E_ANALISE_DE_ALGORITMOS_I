#include <stdio.h>
const char* removeChar(char palavra[], char charToRemmove){
    int i, j;
    int len = strlen(palavra);
    for(i=0; i<len; i++)
    {
        if(palavra[i] == charToRemmove)
        {
            for(j=i; j<len; j++)
                palavra[j] = palavra[j+1];
            len--;
            i--;
        }
      }
  return palavra;
}

int main(void) 
{
  char palavra[1000] = "batata";
  printf("%s",removeChar(palavra, "a"));
  return 0;
}
