/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faz a leitura da linha
void read_line(char linha[], int tam, FILE *f) {
  fgets(linha, tam, f);
  while (linha[0] == '\n') {
    fgets(linha, tam, f);
  }
  if (linha[strlen(linha) - 1] == '\n') {
    linha[strlen(linha) - 1] = '\0';
  }
}

typedef struct time_t{ // meus times
  char nome[30]; // nome do time
  int gols_marcados; // gols marcados pelo time
  int gols_sofridos; // gols sofridos pelo time
}time;

void leitura_dos_times(time vetor[], int quantidade){ // Lê os times
  for(int i=0;i<quantidade;i++){
    vetor = realloc(vetor, sizeof(time) * quantidade);
    read_line(vetor[i].nome, 30, stdin);
    scanf("%d %d",&vetor[i].gols_marcados, &vetor[i].gols_sofridos);
  }
}

void ordena(time vetor[],int t){// ordenação decrescente
	for(int i=0;i<t;i++){
			for(int j=i+1;j<t;j++){
				if(vetor[j].gols_marcados > vetor[i].gols_marcados){
					time aux = vetor[j];
					vetor[j] = vetor[i];
					vetor[i] = aux;
        }
      }
    }
}

int main(){
  int n;
  time *vetor;
  scanf("%d\n",&n);
  vetor = malloc(sizeof(time));
  leitura_dos_times(vetor,n);
  ordena(vetor,n);
  for (int i = 0;i < n;i++){ // imprimir os time,gols marcados e sofridos
    printf("%d - %s\n",i+1,vetor[i].nome);
    printf("Gols marcados: %d\n",vetor[i].gols_marcados);
    printf("Gols sofridos: %d\n",vetor[i].gols_sofridos);
  }
  free(vetor);
  return 0;
}*/