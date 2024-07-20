// Contador de palavras
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_line(char linha[], int tam, FILE *f) {
  fgets(linha, tam, f);
  while (linha[0] == '\n') {
    fgets(linha, tam, f);
  }
  if (linha[strlen(linha) - 1] == '\n') {
    linha[strlen(linha) - 1] = '\0';
  }
}

int checarPedaco(char pedaco[100][100], int qntdd, int k) {
  int totalPed, j = 0;
  char usada[qntdd][100];
  int tamPed = strlen(pedaco[k]);
  totalPed = 0;
  for (int palavrasDaLista = 0; palavrasDaLista < qntdd; palavrasDaLista++) {
    for (int i = 0; i < tamPed; i++) {
      if (pedaco[k][i] == pedaco[palavrasDaLista][j]) {
        j++;
        if (strlen(pedaco[k]) >= strlen(pedaco[palavrasDaLista])) {
          if (j == tamPed) {
            totalPed++;
            j = 0;
          }
        }
      } else {
        j = 0;
      }
    }
  }
  return totalPed;
}

int main() {
  char texto[100];
  read_line(texto, 100, stdin);
  int i = 0;
  int qntdd = 0;
  char *pedaco;
  char pedSeparados[100][100];
  char conc[100][100];
  char numeros[100][100];
  int tamanhos[100];

  pedaco = strtok(texto, " ");

  while (pedaco != NULL) {
    strcpy(pedSeparados[i], pedaco);
    qntdd++;
    pedaco = strtok(NULL, " ");
    i++;
  }
  char total[qntdd];
  for (int k = 0; k < qntdd; k++) {
    total[k] = checarPedaco(pedSeparados, qntdd, k);
  }

  for (int k = 0; k < qntdd; k++) {
    sprintf(numeros[k], "%d", total[k]);
    strcpy(conc[k], strcat(numeros[k], ": "));
    strcpy(conc[k], strcat(conc[k], pedSeparados[k]));
    tamanhos[k] = strlen(conc[k]);
  }

  for (int a = 0; a < qntdd; a++) {
    for (int b = a + 1; b < qntdd; b++) {

      if (strcmp(conc[a], conc[b]) == 0) {
        tamanhos[b] = 0;
      }
    }
  }

  for (int c = 0; c < qntdd; c++) {
    if ((tamanhos[c]) > 0) {
      printf("%s \n", conc[c]);
    }
  }
  return 0;
}*/