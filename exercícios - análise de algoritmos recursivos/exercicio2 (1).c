//NOME: Mateus Kenzo Iochimoto TIA: 32216289
/*
2. Escreva o algoritmo insertion sort recursivo. Determine a fórmula de recorrência.
*/
#include <stdio.h>

void insertionSortRecursivo(int array[], int tamanho) {
    if (tamanho <= 1) {
        return;
    }
    insertionSortRecursivo(array, tamanho - 1);
    int ultimoElemento = array[tamanho - 1];
    int indice = tamanho - 2;

    while (indice >= 0 && array[indice] > ultimoElemento) {
        array[indice + 1] = array[indice];
        indice--;
    }
    array[indice + 1] = ultimoElemento;
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

    insertionSortRecursivo(array, tamanho);

    printf("Array ordenado: ");
    imprimirArray(array, tamanho);

    return 0;
}

/*
T(1) = 1          para n <= 1
T(n) = T(n-1) + (n-1)      se n > 1 
     = T(n-1) + n - 1
*/