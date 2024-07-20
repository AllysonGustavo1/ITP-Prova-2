/*#include <stdlib.h>
#include <stdio.h>

long sequencia(int n){// Função recursiva
  if(n == 1){ // Caso base, quando chegar em 1 para e printa 1
    printf("1");
  }
  else if(n%2 == 0){// Caso o numero seja par
    printf("%d ",n);
    sequencia(n/2);
  }
  else if(n%2 != 0 && n != 1){// Caso o numero seja impar
    printf("%d ",n);
    sequencia(n*3+1);
  }
}

int main(){
  int n;
  scanf("%d",&n);
  sequencia(n);

  return 0;
}*/

//segunda forma de resolver (má pratica)

/*#include <stdlib.h>
#include <stdio.h>

long sequencia(int n){// Função recursiva
  if(n == 1){ // Caso base, quando chegar em 1 para
  }
  else if(n%2 == 0){// Caso o numero seja par
    printf("%d ",n/2);
    sequencia(n/2);
  }
  else if(n%2 != 0 && n != 1){// Caso o numero seja impar
    printf("%d ",n*3+1);
    sequencia(n*3+1);
  }
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d ",n);
  sequencia(n);

  return 0;
}*/