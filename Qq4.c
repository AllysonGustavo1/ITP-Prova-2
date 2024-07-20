// 4 - Recuperar data
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void read_line(char linha[], int tam, FILE *f) {
  fgets(linha, tam, f);
  while (linha[0] == '\n') {
    fgets(linha, tam, f);
  }
  if (linha[strlen(linha) - 1] == '\n') {
    linha[strlen(linha) - 1] = '\0';
  }
}

typedef struct data_t{
  char dia[2], mes[2], ano[4];
}Data;

void indParte1(char data[], int *dia, int *mes, int *ano){
  char *pedaco;
  int i = 0;
  
  pedaco = strtok(data, "-");
  while (pedaco != NULL) {
    if (i == 0){
      *dia = atoi(pedaco);
    }else if (i == 1){
      *mes = atoi(pedaco);
    }else if(i == 2){
      *ano = atoi(pedaco);
    }
    pedaco = strtok(NULL, "-");
    i++;
  }
}

void indParte2(char data[], int *dia, int *mes, int *ano){
  char *pedaco;
  int i = 0;
  
  pedaco = strtok(data, "/");
  while (pedaco != NULL) {
    if (i == 0){
      *dia = atoi(pedaco);
    }else if (i == 1){
      *mes = atoi(pedaco);
    }else if(i == 2){
      *ano = atoi(pedaco);
    }
    pedaco = strtok(NULL, "/");
    i++;
  }
}

int main() {
  char data[50];
  Data dataAux;
  int dia, mes, ano;

  while (1) {
    read_line(data, 50, stdin);
    if (strcmp(data, ("FIM")) == 0) {
      break;
    }
    else{
      if(strstr(data, "-") != NULL){
        indParte1(data, &dia, &mes , &ano);
        printf("%d/%d/%d \n", dia, mes, ano);
      }
      else if(strstr(data, "/") != NULL){
        indParte2(data, &dia, &mes , &ano);
        printf("%d/%d/%d \n", dia, mes, ano);
      }
      else{
        printf("INVALIDO!\n");
      }
    }
  }
  return 0;
}*/