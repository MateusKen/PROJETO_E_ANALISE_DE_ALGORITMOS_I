//NOME: MATEUS KENZO IOCHIMOTO TIA: 32216289
/*
Dadas duas matrizes A e B com N=2 linhas e M=4 colunas descritas abaixo:
Escreva um programa que leia os elementos para matrizes e efetua a soma dos elementos
das duas matrizes em uma terceira matriz (C[][]).
*/
#include <stdio.h>

int main() {
    int N = 2, M = 4;
    int A[N][M], B[N][M], C[N][M];

    printf("Entre com os elementos da matriz A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entre com os elementos da matriz B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calcula a soma das matrizes A e B e armazena em C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matriz C = A + B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
