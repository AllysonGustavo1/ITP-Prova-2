#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct conjunto_t{
  int quantidade;
  int numeros;
}conjunto;

int* uniao(conjunto A, conjunto B){
  int minhauniao[sizeof(A)+sizeof(B)];
  int contador;

  memcpy(minhauniao,A.numeros,sizeof(A));
  for(int j=0;j<B.quantidade;j++){
    for(int i=0;i<A.quantidade;i++){
      if(A.numeros != B.numeros){
        memcpy(minhauniao + sizeof(A) + i, B[j].numeros, sizeof(B));
      }
    }
  }

  return minhauniao;
}

int main(){
  int N,N2;
  scanf("%d",&N);
  conjunto A[N],B[N];
  for(int i=0;i<N;i++){
    A[i].quantidade = N;
    scanf("%d",&A[i].numeros);
  }
  scanf("%d",&N2);
  for(int i=0;i<N2;i++){
    B[i].quantidade = N2;
    scanf("%d",&B[i].numeros);
  }
  int resultado[N+N2];
  
  resultado = uniao(*A,*B);

  return 0;
}