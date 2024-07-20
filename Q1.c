/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  int count = 0;
  int local[3];
  int posicao[100];
  char* A = (char*) calloc(40, sizeof(char)); // busca(A)
  char* B = (char*) calloc(40, sizeof(char)); // frase(B)

  fgets(A,40,stdin); // captura o A
  fgets(B,40,stdin); // captura o B
  A[ strlen(A) - 1 ] = '\0';
  B[ strlen(B) - 1 ] = '\0';

  for(int i=0; i<strlen(A); i++){ // todos os caracteres de A se tornam diminutivos
    A[i] = tolower(A[i]);
    }
  for(int i=0; i<strlen(B); i++){ // todos os caracteres de B se tornam diminutivos
    B[i] = tolower(B[i]);
    }
  
  char* BB = B; // Necessario para puxar o indice
  while(1){ // For para percorrer toda a string até o \0
    BB = strstr(BB,A);
    if (BB!= NULL){ // se encontrar a busca
      count++;
      posicao[count] = BB - B; // posicao do alvo encontrado
      BB += strlen(A);
    }
    if (BB == NULL){
      break;
    }
  }
  printf("Repetições: %d\n", count);
  if(count != 0){
   printf("Posições:");
  for(int i=1;i<=count;i++){
    printf(" %d",posicao[i]);
    }
  }
  
  
  return 0;
}*/