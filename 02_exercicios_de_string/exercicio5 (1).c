#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CARACTERES 256

void imprimir_tabela_ocorrencias(char *vetor) {
    int n = strlen(vetor);
    int ocorrencias[NUM_CARACTERES] = {0};
    int i;

    // Conta as ocorrências de cada caractere
    for (i = 0; i < n; i++) {
        char c = vetor[i];
        ocorrencias[c]++;
    }

    for (i = 0; i < NUM_CARACTERES; i++) {
        if (ocorrencias[i] > 0) {
            printf("%c\t\t%d\n", i, ocorrencias[i]);
        }
    }
}

int main() {
    char vetor[] = "batata";
    imprimir_tabela_ocorrencias(vetor);
    return 0;
}
