#include <stdio.h>
#include <stdlib.h>

struct no_arvore {
       int info;
       struct no_arvore *esq, *dir;
};

typedef struct no_arvore ARVORE;

ARVORE *CAPB (int N)
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

void Imprime(ARVORE *R)
{
	if (R != NULL)
	{
		printf ("%i  ",R->info);
		Imprime (R->esq);
		Imprime (R->dir);
	}
}

void dc(ARVORE *R, int val)
{
	if (R != NULL)
	{
     	if (R->info==val) {
     	   if (R->esq != NULL) 	
		       printf ("%i  ",(R->esq)->info);	
		   if (R->dir != NULL)
		       printf ("%i  ",(R->dir)->info);
		   return;	
		}
		else {
           dc (R->esq, val);
           dc (R->dir, val);
       }
	}
}

void Pre_Order(ARVORE*R)
{
    if(R!=NULL)
    {
        printf("%i ",R->info);
        Pre_Order(R->esq);
        Pre_Order(R->dir);
    }
}

void In_Order(ARVORE*R)
{
    if(R!=NULL)
    {
        In_Order(R->esq);
        printf("%i ",R->info);
        In_Order(R->dir);
    }
}

void Pos_Order(ARVORE*R)
{
    if(R!=NULL)
    {
        Pos_Order(R->esq);
        Pos_Order(R->dir);
        printf("%i ",R->info);
    }
}

void folhas(ARVORE*R)
{
	if(R!=NULL)
	{
		if ((R->esq==NULL)&&(R->dir==NULL))
			printf("%i ",R->info);
		folhas(R->esq);
		folhas(R->dir);
	}
}

int altura(ARVORE*R)
{
	int alt=0;
	if(R!=NULL)
	{
		while(R!=NULL) 
		{
			alt++;
			R=R->esq;
		}
	}
	return alt;
}

no_arvore *Busca (ARVORE*R, int v)
{
	if (R==NULL)
		return NULL;
	else if (R->info==v)
		return R;
	else
	{
		return Busca(R->esq, v);
		return Busca(R->dir, v);
	}
}

main()
{
	int qtd, val;
	ARVORE *Raiz;
	printf ("Digite o numero de nos para a arvore: ");
	scanf("%i",&qtd);
	Raiz = CAPB(qtd);
    printf("\n\n>Pre-Order: ");
    Pre_Order(Raiz);
    printf("\n\n>In-Order: ");
    In_Order(Raiz);
    printf("\n\n>Pos-Order: ");
    Pos_Order(Raiz);
    printf("\n\n>Somente folhas: ");
    folhas(Raiz);
    printf("\n\n>Altura arvore: %i", altura(Raiz));
    printf("\n\n>Busca no 30: ");
    printf("%p", Busca(Raiz, 30));
}


