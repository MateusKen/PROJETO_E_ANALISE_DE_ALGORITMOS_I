//1. Algoritmos de ordenação:
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//(a) Crie uma função para gerar um vetor de números aleatórios de tamanho n
int criaVetor(int n){
  int *v = (int *)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
  return v;
}

//(b) Implemente os algoritmos bubble sort, insertion sort, selection sort e shell sort.
//bubble sort
void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // troca arr[j] e arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//insertion sort
void insertion_sort(int array[], int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

//selection sort
void selection_sort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
//shell sort
void shell_sort(int arr[], int n)
{
    for (int chave = n/2; chave > 0; chave /= 2)
    {
        for (int i = chave; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= chave && arr[j - chave] > temp; j -= chave)
                arr[j] = arr[j - chave];
            arr[j] = temp;
        }
    }
}

//(d) Construa uma função que verifique se o vetor está em ordem. Verifique os resultado do item anterior.
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void printVerificacao(int v[], int n){
    if (isSorted(v, n)) {
    printf("O vetor de tamanho %d está organizado\n", n);
} else {
    printf("O vetor não está organizado\n");
}
}

//(c) Para cada método de ordenação, ordene vetores de tamanho 1000, 5000, 10000.
void c(int alt){
  if (alt == 1){
  int *v1 = criaVetor(1000);
  int *v2 = criaVetor(5000);
  int *v3 = criaVetor(10000);
  printf("bubble sort\n");
  bubble_sort(v1, 1000);bubble_sort(v2, 5000);bubble_sort(v3 , 10000);
  printVerificacao(v1, 1000);
  printVerificacao(v2, 5000);
  printVerificacao(v3, 10000);
  }

  if (alt == 2){
  int *v1 = criaVetor(1000);
  int *v2 = criaVetor(5000);
  int *v3 = criaVetor(10000);
  printf("insertion sort\n");
  insertion_sort(v1, 1000);insertion_sort(v2, 5000);insertion_sort(v3 , 10000);
  printVerificacao(v1, 1000);
  printVerificacao(v2, 5000);
  printVerificacao(v3, 10000);
  }

  if (alt ==3){
  int *v1 = criaVetor(1000);
  int *v2 = criaVetor(5000);
  int *v3 = criaVetor(10000);
  printf("selection sort\n");
  selection_sort(v1, 1000);selection_sort(v2, 5000);selection_sort(v3 , 10000);
  printVerificacao(v1, 1000);
  printVerificacao(v2, 5000);
  printVerificacao(v3, 10000);
  }
  
  if (alt == 4){
  int *v1 = criaVetor(1000);
  int *v2 = criaVetor(5000);
  int *v3 = criaVetor(10000);
  printf("shell sort\n");
  shell_sort(v1, 1000);shell_sort(v2, 5000);shell_sort(v3 , 10000);
  printVerificacao(v1, 1000);
  printVerificacao(v2, 5000);
  printVerificacao(v3, 10000);
  }
}

int main(void) {
  c(1);
  c(2);
  c(3);
  c(4);
}
