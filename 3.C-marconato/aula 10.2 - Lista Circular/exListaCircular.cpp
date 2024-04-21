/*

Samuel 638217

•Considerando o arquivo desenvolvido de listas duplamente encadeadas, faca as declaracoes adequadas, e crie as seguintes funcoes para listas circulares:
a)Criar lista vazia;
b)Inserir no Inicio da Lista;
c)Inserir no Fim da lista
d)Imprimir a lista
e)Remover o primeiro elemento da lista
f)Remover o último elemento da lista

*/

#include <stdio.h>
#include <stdlib.h>

struct no {
	struct no *prox;
	int info;
};
typedef struct no Lista;

void cria_lc(Lista **Inicio)
{
	*Inicio = NULL;
}

void Ins_Inicio(Lista **Inicio, int v)
{
	Lista *novo = (Lista *)calloc(1, sizeof(Lista));
	novo->info = v;
	if (*Inicio == NULL)
	{
		novo->prox = novo;
	}
	else
	{
		novo->prox = *Inicio;
		Lista *temp = *Inicio;
		while (temp->prox != *Inicio)
		{
			temp = temp->prox;
		}
		temp->prox = novo;
	}
	*Inicio = novo;
}

void Ins_Fim(Lista **Inicio, int v)
{
	Lista *novo = (Lista *)calloc(1, sizeof(Lista));
	novo->info = v;
	if (*Inicio == NULL)
	{
		novo->prox = novo;
		*Inicio = novo;
	}
	else
	{
		Lista *temp = *Inicio;
		while (temp->prox != *Inicio)
		{
			temp = temp->prox;
		}
		temp->prox = novo;
		novo->prox = *Inicio;
	}
}

void Imprime(Lista *Inicio)
{
	if (Inicio == NULL)
	{
		printf("Lista vazia\n");
		return;
	}
	Lista *temp = Inicio;
	do
	{
		printf("%d -> ", temp->info);
		temp = temp->prox;
	} while (temp != Inicio);
	printf("...\n");
}

int Rem_Inicio(Lista **Inicio)
{
	if (*Inicio == NULL)
		return 0;

	Lista *temp = *Inicio;
	Lista *ultimo = *Inicio;
	while (ultimo->prox != *Inicio)
	{
		ultimo = ultimo->prox;
	}
	*Inicio = (*Inicio)->prox;
	ultimo->prox = *Inicio;
	free(temp);
	return 1;
}

int Rem_Fim(Lista **Inicio)
{
	if (*Inicio == NULL)
		return 0;

	Lista *temp = *Inicio;
	Lista *ant = NULL;
	while (temp->prox != *Inicio)
	{
		ant = temp;
		temp = temp->prox;
	}
	if (ant != NULL)
	{
		ant->prox = *Inicio;
	}
	else
	{
		*Inicio = NULL;
	}
	free(temp);
	return 1;
}

int main() {
  Lista *Inicio;
  cria_lc(&Inicio);
  Ins_Fim(&Inicio, 10);
  Ins_Fim(&Inicio, 20);
  Ins_Fim(&Inicio, 30);
  Ins_Fim(&Inicio, 40);
  Ins_Fim(&Inicio, 50);
  Ins_Inicio(&Inicio, 5);
  Imprime(Inicio);
  Rem_Fim(&Inicio);
  Rem_Inicio(&Inicio);
  Imprime(Inicio);
  return 0;
}
