#include <stdio.h>
#include <stdlib.h>

struct no {
  int info;
  struct no * prox;
};
typedef struct no Lista; 

Lista * cria () {
	return NULL;
}

void cria (Lista **L) {
	*L = NULL;
}

void Ins_Inicio (Lista **L, int v) {
	Lista * p = (Lista *) calloc (1, sizeof(Lista));
	p -> info = v;
	p -> prox = *L;
	*L = p;
}

void imprime (Lista  *L) {
  Lista *p;
  p = L;
  while (p != NULL) {
    printf("%d -> ", p->info);
    p = p -> prox;  
  }
  printf("NULL \n");
}

void Ins_Fim (Lista **L, int v)
{
	Lista *p, *q;
	p = (Lista *)calloc (1, sizeof(Lista));
	p -> info = v;
	p -> prox = NULL;
	if (*L == NULL) {
    	*L = p;
  	} else {
    	q = *L;
    	while (q -> prox != NULL) {
      		q = q -> prox;
    	}
    q -> prox = p;
  }
}

void removerPrimeiroNo(Lista **L) {
	if (*L == NULL) {
        printf("Lista vazia.\n");
        return;
    } else {
    	Lista *temp = *L;
    	*L = (*L) -> prox;
    	free(temp);
	}
}

main () {
	Lista *l;
  	l = cria();
  	
  	Ins_Inicio(&l, 10);
	Ins_Fim(&l, 20);
	Ins_Fim(&l, 30);
	Ins_Inicio(&l, 5);
	Ins_Fim(&l, 40);
	Ins_Inicio(&l, 2);
	Ins_Fim(&l, 50);
  	imprime(l);
  	
	removerPrimeiroNo(&l);
	imprime(l);
};
