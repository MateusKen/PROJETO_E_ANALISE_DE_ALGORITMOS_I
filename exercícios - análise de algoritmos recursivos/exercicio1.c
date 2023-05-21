// NOME: Mateus Kenzo Iochimoto TIA: 32216289
/*
1. Escreva o algoritmo bubble sort recursivo. Determine a fórmula de recorrência
*/

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortRecursivo(int array[], int tamanho) {
    if (tamanho <= 1) {
        return;
    }
    for (int i = 0; i < tamanho - 1; i++) {
        if (array[i] > array[i + 1]) {
            trocar(&array[i], &array[i + 1]);
        }
    }
    bubbleSortRecursivo(array, tamanho - 1);
}

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Array original: ");
    imprimirArray(array, tamanho);

    bubbleSortRecursivo(array, tamanho);

    printf("Array ordenado: ");
    imprimirArray(array, tamanho);

    return 0;
}

/*
T(1) = 1         se n <= 1                
T(n) = T(n-1) + (n-1) + T(n-1)   se n > 1  
     = 2T(n-1) + 2(n-1) - 1
*/
