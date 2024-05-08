#include <stdio.h>
#include <stdlib.h>

struct no_arvore {
  int info;
  struct no_arvore *esq, *dir;
};

typedef struct no_arvore ARVORE;

ARVORE *CAPB(int N)
{
  ARVORE *r;
  if (N==0)
    r=NULL;
  else
  {
    r = (ARVORE *) calloc (1, sizeof(ARVORE));
    printf("\nDigite um valor => ");
    scanf("%i",&r->info);
    r->esq = CAPB(N/2);
    r->dir = CAPB(N - N/2 - 1);
  }
  return r;
}

void BuscaNo(int noBuscado, ARVORE *R)
{
  if (R != NULL || R->info != noBuscado)
  {
  	if (R -> info == noBuscado) {
    if (R->esq != NULL)
      printf("%i ", (R->esq)->info);
    if (R->dir != NULL)
      printf("%i ", (R->esq)->info);
    }
  }
}

void Imprime(ARVORE *R)
{
  if (R != NULL)
  {
    printf("%i  ",R->info);
    Imprime(R->esq);
    Imprime(R->dir);
  }
}

int main()
{
  int qtd, noBuscado;
  ARVORE *Raiz, *ResBusca;
  
  printf("\nDigite o numero de nos para a arvore: ");
  scanf("%i",&qtd);
  Raiz = CAPB(qtd);
  printf("\nArvore completa:");
  Imprime(Raiz);
  
  printf("\n\nDigite um dos nos da arvore acima para buscar sua subarvore: ");
  scanf("%i",&noBuscado);
  BuscaNo(noBuscado, Raiz);  
  return 0;
}

