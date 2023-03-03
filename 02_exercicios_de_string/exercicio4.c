#include <stdio.h>
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
