//NOME: MATEUS KENZO IOCHIMOTO TIA: 32216289
/*3. Dado a matriz An×n, determine sua transposta At
, onde A[i][j] = At
[j][i] para qualquer i
e j, conforme exemplo abaixo. Suponha que 1 ≤ n ≤ 20:

*/
#include <stdio.h>

void transporMatriz(int A[][20], int n) {
    int aux;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            aux = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = aux;
        }
    }
}

int main() {
    int n = 3;
    int A[20][20] = {{1,2,3}, {4,5,6}, {7,8,9}};

    printf("Matriz original:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    transporMatriz(A, n);

    printf("Matriz transposta:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
