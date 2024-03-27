#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do no
struct no {
  int info;
  struct no * prox;
};
typedef struct no Lista; 

// Criando uma lista simplesmente encadeada vazia, com retorno
Lista * cria () {
	return NULL;
}

// Criando a lista com passagem de parâmetros
void cria (Lista **L) {
	*L = NULL;
}

// Inserindo um novo nó no inicio da lista
void Ins_Inicio (Lista **L, int v) {
	Lista * p = (Lista *)calloc (1, sizeof(Lista));
	p -> info = v;
	p -> prox = *L;
	*L = p;
}

// Mostrnado os nós na tela
void imprime (Lista  *L) {
  Lista *p;
  p = L;
  while (p != NULL) {
    printf ("%d -> ", p->info);
    p = p->prox;  
  }
  printf ("NULL \n");
}

// Inserindo um nó no final da lista
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

main() {
  Lista *l;                // Declara um ponteiro para a lista
  l = cria();              // Cria uma lista vazia
  Ins_Inicio(&l, 10);      // Insere o valor 10 no inicio da lista
  Ins_Fim(&l, 20);         // Insere o valor 20 no final da lista
  Ins_Fim(&l, 30);         // Insere o valor 30 no final da lista
  imprime(l);              // Imprime a lista
}
