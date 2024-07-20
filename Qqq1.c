/*#include <stdio.h>
#include <stdlib.h>

typedef struct aluno_t{
  int matricula;
  char nome[50];
  int codigodadisciplina;
  float nota1;
  float nota2;
}aluno;

int main(){
  int quantidade;
  scanf("%d",&quantidade);
  aluno vetor[quantidade];
  for (int i=0;i<quantidade;i++){
    scanf("%d",&vetor[i].matricula);
    getchar();
    getchar();
    scanf("%s",*&vetor[i].nome);
    getchar();
    getchar();
    scanf("%d",&vetor[i].codigodadisciplina);
    getchar();
    getchar();
    scanf("%f",&vetor[i].nota1);
    getchar();
    getchar();
    scanf("%f",&vetor[i].nota2);
  }
  for (int i=0;i<quantidade;i++){
    printf("%s média final = %.1f\n",vetor[i].nome,((vetor[i].nota1 + (vetor[i].nota2)*2) / 3)); 
  }
  return 0;
}*/