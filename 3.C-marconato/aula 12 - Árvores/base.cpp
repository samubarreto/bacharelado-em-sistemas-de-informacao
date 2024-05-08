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

ARVORE *BuscaNo(int noBuscado, ARVORE *R)
{
  if (R == NULL || R->info == noBuscado)
    return R;
  
  ARVORE *esquerda = BuscaNo(noBuscado, R->esq);
  if (esquerda != NULL)
    return esquerda;
  
  return BuscaNo(noBuscado, R->dir);
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
  ResBusca = BuscaNo(noBuscado, Raiz);
  
  if (ResBusca != NULL) {
    printf("\nSubarvore do no %d:", noBuscado);
    Imprime(ResBusca);
  } else {
    printf("\nNo nao encontrado na arvore.");
  }
  
  return 0;
}

