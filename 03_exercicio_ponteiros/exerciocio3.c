#include <stdio.h>
/*3. Escreva uma função que recebe um vetor com números inteiros e positivos e a quantidade
de elementos no vetor, sua função encontra e devolve o maior valor e o menor valor no
vetor.
*/

void encontraMaiorMenor (int *maior, int *menor, int vetor[], int size) {
  for (int i =0; i<=size; i++){
    if (i==0){
      *maior = vetor[i];
      *menor = vetor[i];
    }
    else{
      if (vetor[i]>*maior)
        *maior = vetor[i];
      if (vetor[i]<*menor)
        *menor = vetor[i];
      
    }
      
    
  }
}

void main(){
  int maior, menor, vetor[4] = {1,4,6,2}, size = 4;
  encontraMaiorMenor(&maior, &menor, vetor, size);
  printf("o maior é %d, o menor é %d", maior,menor);
}
