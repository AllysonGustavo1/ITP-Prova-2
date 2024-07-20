// Métricas de um conjunto de textos
/*#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
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
int tamMaximo(int n, char tamanhoPalavra[n]) {
  int maior;
  if (tamanhoPalavra[0] >= tamanhoPalavra[1]) {
    maior = tamanhoPalavra[0];
  } else {
    maior = tamanhoPalavra[1];
  }

  for (int t = 2; t < n; t++) {
    if (t + 1 <= n) {
      if (tamanhoPalavra[t] >= maior) {
        maior = tamanhoPalavra[t];
      } else {
        maior = maior;
      }
    }
  }
  return maior;
}
int tamMinimo(int n, char tamanhoPalavra[n]) {
  int menor;
  if (tamanhoPalavra[0] <= tamanhoPalavra[1]) {
    menor = tamanhoPalavra[0];
  } else {
    menor = tamanhoPalavra[1];
  }

  for (int t = 2; t < n; t++) {
    if (t + 1 <= n) {
      if (tamanhoPalavra[t] <= menor) {
        menor = tamanhoPalavra[t];
      } else {
        menor = menor;
      }
    }
  }
  return menor;
}
float tamMedio(int n, char tamanhoPalavra[n]) {
  float medio, soma = 0;

  for (int t = 0; t < n; t++) {
    soma = tamanhoPalavra[t] + soma;
    soma = soma;
  }
  medio = soma / n;

  return medio;
}
int tamProximo(int n, char tamanhoPalavra[n], int media) {

  int atual = tamanhoPalavra[0];

  for (int t = 1; t < n; t++) {
    if (tamanhoPalavra[t] >= media && tamanhoPalavra[t] <= atual ||
        (tamanhoPalavra[t] <= media && tamanhoPalavra[t] >= atual)) {
      atual = tamanhoPalavra[t];
    }
  }
  return atual;
}

int main(void) {
  int n, maximo, minimo, TamProximos;
  float media;
  scanf("%d", &n);
  char palavras[n][200];
  char tamanhoPalavra[n];

  for (int i = 0; i < n; i++) {
    read_line(palavras[i], 200, stdin);
  }
  for (int j = 0; j < n; j++) {
    tamanhoPalavra[j] = strlen(palavras[j]);
  }

  maximo = tamMaximo(n, tamanhoPalavra);
  printf("Tamanho máximo: %d\n", maximo);
  minimo = tamMinimo(n, tamanhoPalavra);
  printf("Tamanho mínimo: %d\n", minimo);
  media = tamMedio(n, tamanhoPalavra);
  printf("Tamanho médio: %.2f\n", media);
  TamProximos = tamProximo(n, tamanhoPalavra, media);
  printf("Tamanho mais próximo da média %d\n", TamProximos);
  printf("Textos\n");

  for (int j = 0; j < n; j++) {
    if (tamanhoPalavra[j] == TamProximos) {
      for (int i = 0; i < tamanhoPalavra[j]; i++) {
        printf("%s \n", palavras[j]);
        j = n;
     break;
      }
    }
  }

  return 0;
}*/