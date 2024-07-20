/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct times_t{ // times
  char nome[200]; // nome do time
  int vitorias,empates,derrotas; // vitorias empates e derrotas dos times
  int gols_feitos,gols_sofridos; // gols feitos e gols sofridos
  int pontos; // pontos feitos pelo time
}time;

void leitura_dos_times(time vetor[], int quantidade){ // Lê os times
  int pontos;
  for(int i=0;i<quantidade;i++){
    scanf("%s",vetor[i].nome);
    scanf("%d",&vetor[i].vitorias);
    scanf("%d",&vetor[i].empates);
    scanf("%d",&vetor[i].derrotas);
    scanf("%d",&vetor[i].gols_feitos);
    scanf("%d",&vetor[i].gols_sofridos);
    vetor[i].pontos = ((vetor[i].vitorias * 3) + vetor[i].empates);
    vetor[i].nome[strlen(vetor[i].nome)-1] = '\0'; // Remover o ultimo caracter do nome dos times
  }
}

void ordena(time vetor[],int t){// ordenação crescente
	for(int i=0;i<t;i++)
			for(int j=i+1;j<t;j++)
				if(vetor[i].pontos < vetor[j].pontos){
					time aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
        else if(vetor[i].pontos == vetor[j].pontos && vetor[i].vitorias < vetor[j].vitorias){
					time aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
        else if(vetor[i].vitorias == vetor[j].vitorias && (vetor[i].gols_feitos - vetor[i].gols_sofridos) < (vetor[j].gols_feitos - vetor[j].gols_sofridos)){
          time aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
		    }
	    }

  void imprime_tabela(time vetor[],int t){
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
    for (int i=0;i<t;i++){
      printf("%s| %d| %d| %d| %d| %d| %d| %d| %d\n",vetor[i].nome,vetor[i].pontos,(vetor[i].vitorias + vetor[i].empates + vetor[i].derrotas), vetor[i].vitorias, vetor[i].empates, vetor[i].derrotas, vetor[i].gols_feitos, vetor[i].gols_sofridos, (vetor[i].gols_feitos - vetor[i].gols_sofridos));
    }
    printf("\nTimes na zona da libertadores: \n");
    for(int i=0;i<6;i++){
      printf("%s\n",vetor[i].nome);
    }
    printf("\nTimes rebaixados: \n");
    for(int i=1;i<5;i++){
      printf("%s\n",vetor[t-i].nome);
    }
  }

int main(){
  int T;
  scanf("%d",&T);
  time vetor[T];
  leitura_dos_times(vetor,T);
  ordena(vetor,T);
  imprime_tabela(vetor,T);
  return 0;
}*/