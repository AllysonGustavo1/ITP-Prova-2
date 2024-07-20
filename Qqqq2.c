/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cidade_t{
  int aero;
  char nome[50],pais[50];
}cidade;

// Read the line
void read_line(char linha[], int tam, FILE *f) {
  fgets(linha, tam, f);
  while (linha[0] == '\n') {
    fgets(linha, tam, f);
  }
  if (linha[strlen(linha) - 1] == '\n') {
    linha[strlen(linha) - 1] = '\0';
  }
}

int **AlocaMatriz(int m, int n) {
  int **M;
  int i;

  M = (int **)malloc(sizeof(int *) * m);
  if (M == NULL) {
    printf("Memoria insuficiente.\n");
    exit(1); // END
  }
  for (i = 0; i < m; i++) {
    M[i] = (int *)malloc(sizeof(int) * n);
    if (M[i] == NULL) {
      printf("Memoria insuficiente.\n");
      exit(1); // END
    }
  }
  return M;
}

// Read cities
void leitura_cidades(cidade vetor_cidade[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    read_line(vetor_cidade[i].nome, 50, stdin);
    read_line(vetor_cidade[i].pais, 50, stdin);
    scanf("%d", &vetor_cidade[i].aero);
  }
}

// Read prices
void leitura_precos(int *matriz[], int tamanho) {
  int coluna;
  for (int i = 0; i < tamanho; i++) {
    coluna = 0;
    while (coluna < tamanho) {
      scanf("%d", &matriz[i][coluna]);
      coluna++;
    }
  }
}

// Just print
void imprimir(int p, int *matriz[], int tamanho, cidade vetor_cidade[]) {
  int posCol, IND;
  int vetorAux[tamanho];
  int menor;

  for (int i = 0; i < tamanho; i++) {
    if (matriz[i][p] != -1) {
      vetorAux[i] = matriz[i][p];
    }
  }
  menor = vetorAux[0];
  for (int ind = 1; ind < tamanho; ind++) {
    if (menor < vetorAux[ind] && vetorAux[ind] != 0) {
      menor = menor;
    } else if (vetorAux[ind] < menor && vetorAux[ind] != 0) {
      menor = vetorAux[ind];
    }
  }

  for (int ind = 0; ind < tamanho; ind++) {
    if (menor == vetorAux[ind]) {
      posCol = ind;
    }
  }
  printf("Voo mais barato chegando em %s: %s (%s) - %d aeroporto(s) - R$%d", vetor_cidade[p].nome, vetor_cidade[posCol].nome, vetor_cidade[posCol].pais, vetor_cidade[posCol].aero, menor);
}

int main(){
int tamanho, p;
scanf("%d", &tamanho);
cidade *vetor_cidade;
int **matriz;
vetor_cidade = malloc(sizeof(cidade) * tamanho);
leitura_cidades(vetor_cidade, tamanho);
matriz = AlocaMatriz(tamanho, tamanho);
leitura_precos(matriz, tamanho);
scanf("%d", &p);
getchar();
// Now we just need print this :)
imprimir(p, matriz, tamanho, vetor_cidade);
free(vetor_cidade);
for (int i = 0; i < tamanho; i++) {
  free(matriz[i]);
}
free(matriz);
return 0;
}*/