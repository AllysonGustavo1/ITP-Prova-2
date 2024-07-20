// 1 - Extração de e-mails
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void extracao(char email[], char *novoemail){
  char *token;
  printf("%s",email);
  token = strtok(email, "@");
  token = strtok(NULL, ".");
  strcpy(novoemail, token);
}

int main () {
  char email[50],novoemail[50];

  while(1){
    fgets(email,50,stdin);
    if(strstr(email, "FIM") != 0){
      break;
    }
    else{
      extracao(email,novoemail);
      printf("%s\n",novoemail);
  }
  }
  
return 0;
}*/