//NOME: MATEUS KENZO IOCHIMOTO TIA: 32216289
/*Escreva e teste uma função que gera e retorna um vetor alocado dinamicamente de tamanho N com números gerados aleatoriamente entre 0 e 1000, considere que N é informado
por parâmetro ao método.
*/
#include <stdio.h>
#include <stdlib.h>  // para a função rand()
#include <time.h>    // para a função time()

int* gerarVetorAleatorio(int N) {
    int* vetor = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 1001;  // resto da divisão por 1001 para garantir números entre 0 e 1000
    }

    return vetor;
}

int main() {
    int N = 10;
    int* v = gerarVetorAleatorio(N);
    
    for (int i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);  // liberar a memória alocada
    return 0;
}
