#include <stdlib.h>
#include <stdio.h>

// Definir a estrutura do nó da lista
struct no
{
    struct no *esq;
    int info;
    struct no *dir;
};
typedef struct no Lista;

// Criar a lista vazia
void cria_lde(Lista **Inicio, Lista **Fim)
{
    *Inicio = NULL;
    *Fim = NULL;
}

// Inserir um nó no início da lista
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

// Inserir um nó no fim da lista
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

// Remover nó no início da lista
int Rem_Inicio(Lista **Inicio, Lista **Fim, int *v)
{
    Lista *p;
    if (*Inicio != NULL)
    {
        p = *Inicio;
        *Inicio = p->dir;
        if (p->dir == NULL) // só existe 1 nó na lista
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

// Remover nó no fim da lista
int Rem_Fim(Lista **Inicio, Lista **Fim, int *v)
{
    Lista *p;
    if (*Inicio != NULL)
    {
        p = *Fim;
        *Fim = p->esq;
        if (p->esq == NULL) // só existe 1 nó na lista
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

// Imprime os valores da lista
void Imprime(Lista *Inicio)
{
    Lista *p;
    p = Inicio;
    printf("NULL");
    while (p != NULL)
    {
        printf(" <- %d ->", p->info);
        p = p->dir;
    }
    printf(" NULL\n");
}

// 1.) Elabore uma função para retornar com um ponteiro para o nó que contém val. Caso val não exista na lista, retorne NULL.
Lista *consulta(Lista *Inicio, int val)
{
    Lista *p;
    p = Inicio;
    while ((p != NULL) && (p->info != val))
        p = p->dir;
    return p;
}

// 2.) Elabore uma função que faça a inserção de um novo nó após o nó que contém a informação val. Caso val não exista, inserir o nó no fim da lista.
void insertAposNo(Lista **Inicio, Lista **Fim, int val, int novoNo)
{
    Lista *p;
    p = *Inicio;
    while ((p != NULL) && (p->info != val))
        p = p->dir;

    if (p == NULL)
    { // Caso val não exista, inserir o nó no fim da lista
        Ins_Fim(Inicio, Fim, novoNo);
    }
    else
    { // Caso contrário, inserir o novo nó após o nó que contém a informação val
        Lista *novo = (Lista *)malloc(sizeof(Lista));
        novo->info = novoNo;
        novo->esq = p;
        novo->dir = p->dir;

        if (p->dir != NULL) // Se o nó não for o último da lista
            p->dir->esq = novo;

        else // Se o nó for o último da lista, atualize o ponteiro Fim;
            *Fim = novo;

        p->dir = novo;
    }
}

// 3.) Elabore uma função que remova um nó que contenha a informação val da lista. Caso val não exista, retorne 0. Caso a remoção seja realizada com sucesso, retorne 1.
int removeNoQueContemVal(Lista **Inicio, Lista **Fim, int val)
{
    Lista *p;
    p = *Inicio;
    while ((p != NULL) && (p->info != val))
        p = p->dir;
    if (p == NULL)
    {
        return 0;
    }
    else
    {
        if (p == *Inicio)
            *Inicio = p->dir;
        else
            p->esq->dir = p->dir;
        if (p == *Fim)
            *Fim = p->esq;
        else
            p->dir->esq = p->esq;
        free(p);
        return 1;
    }
}

int main()
{
    Lista *Inicio, *Fim;
    cria_lde(&Inicio, &Fim);
    int op, val;
    int y = 0, r, *v;
    v = &y;

    do
    {
        system("cls");
        puts("1 - Inserir no Inicio");
        puts("2 - Inserir no Fim");
        puts("3 - Imprimir a Lista");
        puts("4 - Remover no Inicio");
        puts("5 - Remover no Fim");
        puts("6 - Consultar");
        // puts("7 - Insere após valor existente");
        // puts("8 - Remove valor da Lista");

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
                printf("\nLista Vazia!");
            else
                Imprime(Inicio);

            system("Pause");
            break;

        case 4:
            if (Inicio == NULL)
                printf("\nLista Vazia!");
            else
            {
                r = Rem_Inicio(&Inicio, &Fim, v);
                if (r == 1)
                    printf("\nValor Removido => %d\n", *v);
            }
            system("Pause");
            break;

        case 5:
            if (Inicio == NULL)
                printf("\nLista Vazia!");
            else
            {
                r = Rem_Fim(&Inicio, &Fim, v);
                if (r == 1)
                    printf("\nValor Removido => %d\n", *v);
            }
            system("Pause");
            break;

        case 6:
            printf("\nDigite o valor: ");
            scanf("%d", &val);
            Lista *C;
            C = consulta(Inicio, val);
            if (C != NULL)
                printf("Valor Encontrado => %d\n", C->info);
            else
                printf("NULL\n");
            system("Pause");
            break;

        // case 7:
        //     if (Inicio == NULL)
        //         printf("\nLista Vazia!");
        //     else
        //     {
        //         printf("\nDigite o valor: ");
        //         scanf("%d", &val);
        //         __7(&Inicio, &Fim, val);
        //     }
        //     system("Pause");
        //     break;

        // case 8:
        //     if (Inicio == NULL)
        //         printf("\nLista Vazia!");
        //     else
        //     {
        //         printf("\nDigite o valor: ");
        //         scanf("%d", &val);
        //         __8(&Inicio, &Fim, val);
        //     }
        //     system("Pause");
        //     break;
        }
    } while (op != 0);

    return 0;
}
