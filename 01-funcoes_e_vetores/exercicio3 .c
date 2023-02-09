#include<stdio.h>
#include <locale.h>
#include <stdbool.h>
//TIA: 32216289 NOME: Mateus Kenzo Iochimoto TURMA: 3G
 
int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("true");
 else
    printf("false");
 
 return 0;
}