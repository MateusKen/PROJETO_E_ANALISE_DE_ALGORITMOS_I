#include<stdio.h>
#include <locale.h>
#include <stdbool.h>
//TIA: 32216289 NOME: Mateus Kenzo Iochimoto TURMA: 3G
 
/* 3. Escreva uma função que receba por parâmetro um n número natural maior que 1, e verifica se o mesmo é primo ou não. 
Caso o número seja primo é retornado True e caso contrário False. */

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
