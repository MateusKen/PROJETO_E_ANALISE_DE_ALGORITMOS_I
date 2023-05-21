//NOME: Mateus Kenzo Iochimoto TIA: 32216289
/*
3. Escreva o algoritmo selection sort recursivo. Determine a fórmula de recorrência
*/
#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSortRecursivo(int array[], int tamanho, int indice) {
    if (indice >= tamanho - 1) {
        return;
    }
    int menorElemento = indice;
    for (int i = indice + 1; i < tamanho; i++) {
        if (array[i] < array[menorElemento]) {
            menorElemento = i;
        }
    }
    trocar(&array[indice], &array[menorElemento]);
    selectionSortRecursivo(array, tamanho, indice + 1);
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

    selectionSortRecursivo(array, tamanho, 0);

    printf("Array ordenado: ");
    imprimirArray(array, tamanho);

    return 0;
}


/*
T(1) = 1      para n <= 1
T(n) = T(n-1) + (n-1) + T(n-1)   para n > 1
     = 2T(n-1) + 2(n-1) - 1
*/