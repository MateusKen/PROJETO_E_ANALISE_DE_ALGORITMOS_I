/*
NOME: Mateus Kenzo Iochimoto
TIA: 32216289
*/
#include <stdio.h>

typedef struct {
char turma; // turma: A, B, C ou D
unsigned int matricula;
float nota;
} Aluno;

void i(int n, Aluno *vetor) { //i. Ordenado por turma e matricula
  int k;
  Aluno aux;

  for (int i = 0; i < n - 1; i++) {
    k = i;
    for (int j = i + 1; j < n; j++) {
      if (vetor[j].turma < vetor[k].turma ||
          (vetor[j].turma == vetor[k].turma &&
           vetor[j].matricula < vetor[k].matricula)) {
        k = j;
      }
    }
    aux = vetor[k];
    vetor[k] = vetor[i];
    vetor[i] = aux;
  }
}

void ii(int n, Aluno *vetor) { //ii. Ordenado por nota (uma classificação geral de todas as turmas).
  int maiorNota;
  Aluno aux;

  for (int i = 0; i < n - 1; i++) {
    maiorNota = i;
    for (int j = i + 1; j < n; j++) {
      if (vetor[j].nota > vetor[maiorNota].nota) {
        maiorNota = j;
      }
    }
    aux = vetor[maiorNota];
    vetor[maiorNota] = vetor[i];
    vetor[i] = aux;
  }
}

void iii(int n, Aluno *vetor) { //iii. Solicite uma turma e mostre somente os alunos da turma em ordem de matricula.
  i(n, vetor);
  char turma;
  printf("Digite a turma que você quer visualizar os alunos por ordem de "
         "matrícula: ");
  scanf(" %c", &turma);

  for (int i = 0; i < n; i++) {
    if (vetor[i].turma == turma)
      printf("Matrícula: %u  Nota: %.2f\n", vetor[i].matricula, vetor[i].nota);
  }
}

void iv(int n, Aluno *vetor) { //iv. Solicite uma turma e mostre somente os alunos da turma em ordem decrescente nota.
  ii(n, vetor);
  char turma;
  printf("Digite a turma que você quer visualizar os alunos por ordem "
         "descrescente de nota: ");
  scanf(" %c", &turma);

  for (int i = 0; i < n; i++) {
    if (vetor[i].turma == turma)
      printf("Matrícula: %u  Nota: %.2f\n", vetor[i].matricula, vetor[i].nota);
  }
}

int main(void) {
  FILE *arquivo = fopen("texto.txt", "r");
  int n;
  if (arquivo == NULL) // caso o arquivo referenciado não exista
  {
    printf("Não foi possível encontrar o arquivo");
  }
    
  else
  {
    fscanf(arquivo, "%d", &n); // lê a linha com o tamanho do arquivo
    
    Aluno* vetor;
    vetor = (Aluno*)malloc(n* sizeof(Aluno)); //alocação dinamica do vetor do tipo Aluno
    
    for (int i = 0; i < n; i++) // for que segue o tamanho ja definido
    {
      fscanf(arquivo, " %c %u %f", &vetor[i].turma, &vetor[i].matricula, &vetor[i].nota);
    }
    
    int opcao;
    printf("Escolha uma opção:\n1. Ordenado por turma e matrícula.\n2. Ordenado por nota(uma classificação geral de todas as turmas).\n3. Visualizar somente os alunos de uma determinada turma em ordem de matrícula.\n4. Visualizar somente os alunos de uma determinada turma em ordem descrescente de nota.\nDigite a opção desejada: ");
    scanf(" %d", &opcao);
    
    if (opcao == 1) { //i. Ordenado por turma e matricula
    i(n, vetor);
    for (int i = 0; i < n; i++) 
    printf("Turma: %c  Matrícula: %u  Nota: %.2f\n", vetor[i].turma, vetor[i].matricula, vetor[i].nota);
  } else if (opcao == 2) { //ii. Ordenado por nota (uma classificação geral de todas as turmas).
    ii(n, vetor);
    for (int i = 0; i < n; i++) 
    printf("Turma: %c  Matrícula: %u  Nota: %.2f\n", vetor[i].turma, vetor[i].matricula, vetor[i].nota);
  } else if (opcao == 3) { //iii. Solicite uma turma e mostre somente os alunos da turma em ordem de matricula.
    iii(n, vetor);
  } else if (opcao == 4) { //iv. Solicite uma turma e mostre somente os alunos da turma em ordem decrescente de nota.
    iv(n, vetor);
  }
    
    fclose(arquivo);
    free(vetor);
    }
}
