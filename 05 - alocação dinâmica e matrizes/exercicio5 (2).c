//NOME: MATEUS KENZO IOCHIMOTO TIA: 32216289
/*
5. Dadas duas matrizes Am×n e Bn×p. Obter a matriz Cm×p onde C = A × B.
*/
#include <stdio.h>

int main() {
    int m, n, p, i, j, k;

    printf("Entre com as dimensoes da matriz A (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Entre com as dimensoes da matriz B (n x p): ");
    scanf("%d %d", &n, &p);

    // Define as matrizes A, B e C com as dimensões especificadas
    int A[m][n], B[n][p], C[m][p];

    // Preenche a matriz A
    printf("Entre com os elementos da matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Preenche a matriz B
    printf("Entre com os elementos da matriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calcula o produto de A e B
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprime a matriz C resultante
    printf("Matriz C = A x B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
