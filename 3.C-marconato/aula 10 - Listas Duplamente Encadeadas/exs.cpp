#include <stdio.h>
#include <stdlib.h>

// Declaracao para o no da lista:
struct no {
	struct no *esq;
	int info;
	struct no *dir;
};
typedef struct no Lista;

// Criacao da lista vazia
void cria_lde(Lista **Inicio, Lista **Fim)
{
	*Inicio = NULL;
	*Fim = NULL;
}

// Insercao de um novo no no inicio da lista
void Ins_Inicio(Lista **Inicio, Lista **Fim, int v)
{
	Lista *p = (Lista *)calloc(1, sizeof(Lista));
	p->info = v;
	p->esq = NULL;
	p->dir = *Inicio;
	if (*Inicio == NULL)
		*Fim = p;
	else
		(*Inicio)->esq = p;
	*Inicio = p;
}

// Insercao de um novo no no fim da lista
void Ins_Fim(Lista **Inicio, Lista **Fim, int v)
{
	Lista *p = (Lista *)calloc(1, sizeof(Lista));
	p->info = v;
	p->esq = *Fim;
	p->dir = NULL;
	if (*Inicio == NULL)
		*Inicio = p;
	else
		(*Fim)->dir = p;
	*Fim = p;
}

// Remocao de um no no inicio da lista
int Rem_Inicio(Lista **Inicio, Lista **Fim, int *v)
{
	Lista *p;
	if (*Inicio != NULL)
	{
		p = *Inicio;
		*Inicio = p->dir;
		if (p->dir == NULL) // so existe 1 no na lista
			*Fim = NULL;
		else
			(*Inicio)->esq = NULL;
		*v = p->info;
		free(p);
		return 1;
	}
	else
		return 0;
}

// Remocao de um no no fim da lista
int Rem_Fim(Lista **Inicio, Lista **Fim, int *v)
{
	Lista *p;
	if (*Inicio != NULL)
	{
		p = *Fim;
		*Fim = p->esq;
		if (p->esq == NULL) // so existe 1 no na lista
				*Inicio = NULL;
		else
				(*Fim)->dir = NULL;
		*v = p->info;
		free(p);
		return 1;
	}
	else
		return 0;
}

// Imprime
void Imprime(Lista *Inicio)
{
	Lista *p;
	p = Inicio;
	printf("NULL");
	while (p != NULL)
	{
		printf(" <- %d -> ", p->info);
		p = p->dir;
	}
	printf("NULL\n");
}

// 1.)	Elabore uma funcao para retornar com um ponteiro para o no que contem val. Caso val nao exista na lista, retorne NULL.
Lista * consulta(Lista *Inicio, int val) {
	Lista *p;
	p = Inicio;
	while ((p != NULL) && (p->info != val))
		p = p->dir;
	return p;
}

// 2.)	Elabore uma func que faca a insercao de um novo no apos o no que contem a informacao val. Caso val não exista, inserir o no no fim da lista.
void insertAposNo(Lista *Inicio, Lista *Fim, int val, int novoNo) {
    Lista *p;
    p = Inicio;
    while ((p != NULL) && (p->info != val))
        p = p->dir;
    
    if (p == NULL) { // Caso val nao exista, inserir o no no fim da lista
        Ins_Fim(&Inicio, &Fim, novoNo);
    } else { // Caso contrário, inserir o novo no após o no que contem a informação val
        Lista *novo = (Lista *)malloc(sizeof(Lista));
        novo->info = novoNo;
        novo->esq = p;
        novo->dir = p->dir;
        
        if (p->dir != NULL) // Se o no nao for o ultimo da lista
            p->dir->esq = novo;
            
        else // Se o no for o último da lista, atualize o ponteiro Fim;
            Fim = novo;
            
        p->dir = novo;
    }
}

// 3.)	Elabore uma funcao que remova um no que contenha a informação val da lista. Caso val nao exista, retorne 0. Caso a remocao seja realizada com sucesso, retorne 1.
int removeNoQueContemVal(Lista *Inicio, Lista *Fim, int val) {
	Lista *p;
    p = Inicio;
    while ((p != NULL) && (p->info != val))
        p = p->dir;
    if (p == NULL) {
        return 0;
	} else {
		while (p != NULL) {
			p -> info = p -> dir -> info;
			p = p->dir;
		return 1;
		}
	}
}

int main()
{
	Lista *Inicio, *Fim;
	cria_lde(&Inicio, &Fim);
	Ins_Fim(&Inicio, &Fim, 10);
	Ins_Fim(&Inicio, &Fim, 20);
	Ins_Fim(&Inicio, &Fim, 30);
	Ins_Fim(&Inicio, &Fim, 40);
	Ins_Fim(&Inicio, &Fim, 50);
	Imprime(Inicio);
	Lista * res = consulta(Inicio, 30);
	printf("\nEndereco de 30: %d\n\n", res);
	insertAposNo(Inicio, Fim, 30, 600);
	Imprime(Inicio);
	int res2 = removeNoQueContemVal(Inicio, Fim, 6020);
	if (res2) {
		printf("\nRemoveu um digito\n");
	} else {
		printf("\nNao removeu nenhum digito\n");
	}
	Imprime(Inicio);
	return 0;
}

