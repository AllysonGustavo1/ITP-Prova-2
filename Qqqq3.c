/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Matriz_t{
	int l, c;
	int **dados;
}Matriz;

typedef struct string_t{
  char string[20];
}string;


Matriz createMatriz2(int l, int c){
	Matriz m;
	m.l = l;
	m.c = c;
	m.dados = malloc(sizeof(int*)*l);
	for(int i=0; i<l; i++)
		m.dados[i] = malloc(sizeof(int)*c);

	for(int i=0; i<l; i++)
		for(int j=0; j<c; j++)
			m.dados[i][j] = rand()%20;
	
	return m;
}

Matriz* createMatriz(int l, int c){
	Matriz *m;
	m = malloc(sizeof(Matriz));
	m->l = l;
	m->c = c;
	m->dados = malloc(sizeof(int*)*l);
	for(int i=0; i<l; i++)
		m->dados[i] = malloc(sizeof(int)*c);

	for(int i=0; i<l; i++)
		for(int j=0; j<c; j++)
			m->dados[i][j] = rand()%20;
	
	return m;
}

void printMatriz(Matriz *m){
	for(int i=0; i<m->l; i++){
		for(int j=0; j<m->c; j++)
			printf("%d ", m->dados[i][j]);
		printf("\n");
	}
}

void destroyMatriz_2(Matriz **m){
	Matriz *m_r = *m;
	for(int i=0; i<m_r->l; i++)
		free(m_r->dados[i]);
	free(m_r->dados);
	free(m_r);
	*m = NULL;
}

bool prefix(char *pre,string *str){
  if(strncmp(pre, str, strlen(pre)) == 0){
    return false;
  }
  else{
    return true;
  }
}


void destroyMatriz(Matriz *m){
	for(int i=0; i<m->l; i++)
		free(m->dados[i]);
	free(m->dados);
	free(m);
}

int main(void) {
	Matriz *m1 = createMatriz(5,5);
	Matriz m2 = createMatriz2(5,5);
	printMatriz(m1);
	Matriz *m2_ptr = &m2;
	printMatriz(m2_ptr);
	//destroyMatriz(r);
	//if (r == NULL)
  string = {}
  return 0;
}*/