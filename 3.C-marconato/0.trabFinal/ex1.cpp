#include <stdio.h>
#include <stdlib.h>

// Declaracao da estrutura do no
struct no
{
	struct no *prox;
	int info;
};
typedef struct no Lista;

void cria(Lista **Inicio, Lista **Fim)
{
	*Inicio = NULL;
	*Fim = NULL;
}

void Ins_Inicio(Lista **Inicio, Lista **Fim, int v)
{
	Lista *p = (Lista *)calloc(1, sizeof(Lista));
	p->info = v;
	p->prox = *Inicio;
	if (*Inicio == NULL)
		*Fim = p;
	*Inicio = p;
}

void Ins_Fim(Lista **Inicio, Lista **Fim, int v)
{
	Lista *p = (Lista *)calloc(1, sizeof(Lista));
	p->info = v;
	p->prox = NULL;
	if (*Inicio == NULL)
		*Inicio = p;
	else
		(*Fim)->prox = p;

	*Fim = p;
}

void Imprime(Lista *Inicio)
{
	Lista *p;
	p = Inicio;
	while (p != NULL)
	{
		printf("%d - > ", p->info);
		p = p->prox;
	}
	printf("NULL \n");
}

int Rem_Impar(no **Inicio, no **Fim)
{
	no *p;
	if (*Inicio != NULL)
	{
		p = *Inicio;
		if p
		*Inicio = p->prox;
		if (p == *Fim)
			*Fim = NULL;
		*v = p->info;
		free(p);
		return 1;
	}
	else
		return 0;
}

void Trans_Inicio_Fim(Lista **Inicio, Lista **Fim)
{
}

main()
{

	Lista *Inicio, *Fim;
	int op, val;
	int y = 0, r, *v;
	v = &y;

	cria(&Inicio, &Fim);

	do
	{
		system("cls");
		puts("1 - Inserir no Inicio");
		puts("2 - Inserir no Fim");
		puts("3 - Imprimir a Lista");
		puts("4 - Remover primeiro Impar");
		puts("5 - Transferir Inicio para o Fim");
		puts("0 - Sair do programa");

		printf("\nDigite a opcao: ");
		scanf("%d", &op);

		switch (op)
		{
		case 1:
			printf("\nDigite o valor: ");
			scanf("%d", &val);
			Ins_Inicio(&Inicio, &Fim, val);
			break;

		case 2:
			printf("\nDigite o valor: ");
			scanf("%d", &val);
			Ins_Fim(&Inicio, &Fim, val);
			break;

		case 3:
			if (Inicio == NULL)
				printf("\nLista Vazia!\n");
			else
				Imprime(Inicio);

			system("Pause");
			break;

		case 4:
			if (Inicio == NULL)
				printf("\nLista Vazia!\n");
			else
				r = Rem_Impar(&Inicio, &Fim);
			if (r == 1)
				printf("\nValor Removido => %d\n", *v);

			system("Pause");
			break;

		case 5:
			if (Inicio == NULL)
				printf("\nLista Vazia!\n");
			else
			{
				Trans_Inicio_Fim(&Inicio, &Fim);
			}
			system("Pause");
			break;
		}
	} while (op != 0);
}

