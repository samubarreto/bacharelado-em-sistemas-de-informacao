/*
OBS: Não dei conta de fazer os exercícios 3, 4 e 5, mesmo com ajuda do chatgpt, não estou entendendo nada da matéria, professor, muito difícil

1 - Elabore uma func que dado um valor v como parametro, a funcao retorne com um ponteiro para o no que contenha v, caso exista na lista, ou retorne com NULL caso v nao exista na lista.

2 - Elabore uma func para inserir um valor v depois do no que contenha val (outro valor informado). Caso val nao exista na lista, o no nao devera ser inserido.

3 - Elabore uma func para inserir um valor v antes do no que contenha val (outro valor informado). Caso val nao exista na lista, o no nao devera� ser inserido.

4 - Elabore uma func para remover os nos que contenham a informacao val, caso val exista na lista.

5 - Elabore uma func para inserir nos de forma ordenada.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int info;
    struct Lista *prox;
} Lista;

void imprime (Lista  *L) {
  Lista *p;
  p = L;
  while (p != NULL) {
    printf("%d -> ", p->info);
    p = p -> prox;  
  }
  printf("NULL \n");
}

Lista * _ex1_Consulta (Lista *L, int v) {
    Lista *p;
    p=L;
    while ((p!=NULL) && (p->info !=v))
        p=p->prox;
    return p;
};

void _ex2_insereVDps(Lista *L, int v, int val) {
	Lista *p;
    p=L;
    while (p!=NULL) {
    	if (val == p->info && p->prox != NULL) {
            Lista *novoNo = (Lista*) malloc(sizeof(Lista));
            novoNo->info = v;
            novoNo->prox = p->prox;
            p->prox = novoNo;
            break;
        }
        p = p->prox;
	}
};

/*
void _ex3_insereVAntes(Lista *L, int v, int val) {
    Lista *p, *prev = NULL;
    for (p = L; p != NULL && p->info != val; prev = p, p = p->prox) {
    	if (p != NULL) {
	        Lista *novoNo = (Lista*) malloc(sizeof(Lista));
	        novoNo->info = v;
	        if (prev == NULL) {
	            novoNo->prox = L;
	            L = novoNo;
	            break;
	        } else {
	            novoNo->prox = prev->prox;
	            prev->prox = novoNo;
	            break;
	        };
		};
    };
};
*/

/*
void _ex4_removerNosVal(Lista *L, int val) {
    Lista *p, *prev = NULL;
    for (p = L; p != NULL; prev = p, p = p->prox) {
        if (p->info == val) {
            if (prev == NULL) {
                L = p->prox;
                break;
            } else {
                prev->prox = p->prox;
                break;
            }
            free(p);
            return;
        }
    }
};
*/

/*
void _ex5_inserirNosOrdenados(Lista *L, int v) {
    Lista *novoNo = (Lista*) malloc(sizeof(Lista));
    novoNo->info = v;
    if (L == NULL || L->info >= v) {
        novoNo->prox = L;
        L = novoNo;
    } else {
        Lista *p = L;
        while (p->prox != NULL && p->prox->info < v) {
            p = p->prox;
        }
        novoNo->prox = p->prox;
        p->prox = novoNo;
    }
};
*/

void removeUltimoNo(Lista *L) {
    if (L == NULL) return;
    if (L->prox == NULL) {
        free(L);
        L = NULL;
        return;
    }
    Lista *ant = L;
    Lista *atual = L->prox;
    while (atual->prox != NULL) {
        ant = atual;
        atual = atual->prox;
    }
    free(atual);
    ant->prox = NULL;
}

main() {
	Lista *L = (Lista*) malloc(sizeof(Lista));
    L->info = 1;
    L->prox = (Lista*) malloc(sizeof(Lista));
    L->prox->info = 2;
    L->prox->prox = (Lista*) malloc(sizeof(Lista));
    L->prox->prox->info = 6;
    L->prox->prox->prox = NULL;

    Lista *res1 = _ex1_Consulta(L, 2);
    if (res1 != NULL) {
        printf("Valor encontrado: %d\n", res1->info);
    } else {
        printf("Valor nao encontrado na lista.\n");
    }
    
	_ex2_insereVDps(L, 77, 2);
    imprime(L);

    removeUltimoNo(L);
    printf("Lista após remover o último nó:\n");
    imprime(L);
    
    //_ex3_insereVAntes(L, 99, 3);
    //imprime(L);
    
    //_ex4_removerNosVal(L, 1);
    //imprime(L);
    
    //_ex5_inserirNosOrdenados(L, 87);
    //imprime(L);
};
