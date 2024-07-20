/*#include <stdio.h>
#include <stdlib.h>

long func_aux(int x, int y){ // Função auxiliar recursiva
  int calculo;
  if(y == 0){ // previne loop infinito
    return x;
  }
  calculo = x % y;
  int final = func_aux(y, calculo);
  return final;
}

void calc_mdc_mmc (int x, int y, int *mdc, int *mmc){
  int calculo;
  calculo = x*y;
  int final = func_aux(x,y);
  *mdc = final;
  *mmc = calculo/ *mdc;
}

int main(){
  int x, y;
  int mdc, mmc;
  scanf("%d %d",&x,&y);
  calc_mdc_mmc(x, y, &mdc, &mmc);
  printf("MDC = %d, MMC = %d", mdc, mmc);
  
  return 0;
}*/