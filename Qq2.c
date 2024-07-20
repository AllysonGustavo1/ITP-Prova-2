/*#include <stdio.h>
#include <stdlib.h>

void distintos(int tamanho,float *vetor){
  int n = 0,diferente = 0,variavel = 1;
  int contador = 0,contador2 = 0; // quantidade de valores no vetor principal
  float *vetoraux;
  scanf("%f",&vetor[0]);
  for(int i=1; i<tamanho; i++){
    vetoraux = malloc(tamanho * sizeof(float)); // aloca memoria
    scanf("%f",&vetoraux[i]);
    //printf("%d %d %f\n",n, i, vetoraux[1]);
    for(int j=0;j<=sizeof(vetor)/sizeof(int);j++){ // verifica se ja existe o numero no vetoraux
      if(vetor[j] == vetoraux[i]){
        break;
      }
    }
    diferente = 0;
    free(vetoraux);
  }
}

int main(){
  int tamanho;
  
  scanf("%d",&tamanho);
  float vetor[tamanho];
  distintos(tamanho,vetor);
  // Mostra os valores do vetor
  printf("[");
  printf("%f",vetor[0]);
  for(int i=1;i<=tamanho;i++){
    printf(",%f",vetor[i]);
  }
  printf("]");
  
  return 0;
}*/