//NOME: MATEUS KENZO IOCHIMOTO TIA: 32216289
/*
3. Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos
que devem ser armazenado em um vetor de registros. Em seguida imprima a matrícula,
o nome e a média de cada um deles.
*/
#include <stdio.h>

typedef struct {
char *nome;
char *matricula;
int nota1;
int nota2;
} Aluno;

void mostraDados(Aluno *aluno){
  printf("NOME: %s", (*aluno).nome);
  printf("\nMATRÍCULA: %s", (*aluno).matricula);
  printf("\nN1: %d, N2: %d, MÉDIA: %d",(*aluno).nota1,(*aluno).nota2, ((*aluno).nota1+(*aluno).nota2)/2);
}

int main(void) {
  Aluno aluno1, aluno2;
  //declaração do primeiro aluno
  aluno1.nome = "Joao";
  aluno1.matricula = "12345";
  aluno1.nota1 = 5;
  aluno1.nota2 = 7;
  //declaração do segundo aluno
  aluno2.nome = "Maria";
  aluno2.matricula = "23456";
  aluno2.nota1 = 9;
  aluno2.nota2 = 10;

  mostraDados(&aluno1);
  printf("\n");
  mostraDados(&aluno2);
}