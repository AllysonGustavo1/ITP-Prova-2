// Filtragem em Vetores (Strings e Vetores de String)
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

int get_strings_maiores(char strings[][50], char s[], char resultado[][50], int N, int contador1){
  for(int i=0;i<N;i++){
    if(strlen(strings[i]) > strlen(s)){
      strcpy(resultado[contador1],strings[i]);
      contador1++;
    }
  }
  return contador1;
}

int get_strings_tamanho(char strings[][50], int t, char resultado2[][50], int N,int contador2){
  for(int i=0;i<N;i++){
    if(strlen(strings[i]) == t){
      strcpy(resultado2[contador2],strings[i]);
      contador2++;
    }
  }
  return contador2;
}

int main(){
  int N; // quantidade total de strings a serem lidas
  int contador1 = 0,contador2 = 0;
  scanf("%d",&N);
  while(N>50){
    printf("O numero deve ser menor ou igual a 50");
    scanf("%d",&N);
  }
  char strings[N][50],resultado[N][50],resultado2[N][50];
  for(int i=0;i<N;i++){
    read_line(strings[i],50,stdin);
  }
  printf("Nomes maiores que o %do. nome\n",N/2);
  contador1 = get_strings_maiores(strings,strings[N/2],resultado,N,contador1);
  for(int i=0;i<contador1;i++){
    printf("%s\n",resultado[i]);
  }
  printf("Nomes com tamanho igual ao tamanho do %do. nome\n",N/2);
  contador2 = get_strings_tamanho(strings,strlen(strings[N/2]),resultado2,N,contador2);
  for(int i=0;i<contador2;i++){
    printf("%s\n",resultado2[i]);
  }
  return 0;
}*/