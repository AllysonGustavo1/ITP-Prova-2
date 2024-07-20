/*#include <stdio.h>
#include <stdlib.h>

typedef struct churrasco_t{
  char nome[50];
  float preco;
  float quantidade;
}churrasco;

int main(){
  churrasco vetor[50];
  int encerrar = 2,i = 0,participantes;
  for(;;i++){
    scanf("%s",*&vetor[i].nome);
    scanf("%f",&vetor[i].preco);
    scanf("%f",&vetor[i].quantidade);
    scanf("%d",&encerrar);
    if(encerrar == 2){
      break;
      }
    }
  scanf("%d",&participantes);
  float soma = 0;
  for(int j=0;j<=i;j++){
    soma += (vetor[j].preco * vetor[j].quantidade);
  }
  printf("Valor: R$ %.2f\n",soma);
  printf("Divisão R$ %.2f para cada participante.",soma/participantes);
  return 0;
}*/