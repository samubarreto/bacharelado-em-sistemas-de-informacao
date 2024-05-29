#include <stdio.h>
#include <stdlib.h>

struct no_arvore {
    struct no_arvore *esq;
    int info;
    struct no_arvore *dir;
};

typedef struct no_arvore ARVORE;

void Insere(ARVORE **Raiz, int val) {
    if (*Raiz == NULL) {
        (*Raiz) = (ARVORE *)calloc(1, sizeof(ARVORE));
        (*Raiz)->info = val;
        (*Raiz)->esq = NULL;
        (*Raiz)->dir = NULL;    
    } else {
        if (val < (*Raiz)->info)
            Insere(&(*Raiz)->esq, val);
        else
            Insere(&(*Raiz)->dir, val);
    }
}

void Pre_Order(ARVORE *Raiz) {
    if (Raiz != NULL) {
        printf("%d ", Raiz->info);
        Pre_Order(Raiz->esq);
        Pre_Order(Raiz->dir);
    }
}

void In_Order(ARVORE *Raiz) {
    if (Raiz != NULL) {
        In_Order(Raiz->esq);
        printf("%d ", Raiz->info);
        In_Order(Raiz->dir);
    }
}

void Pos_Order(ARVORE *Raiz) {
    if (Raiz != NULL) {
        Pos_Order(Raiz->esq);
        Pos_Order(Raiz->dir);
        printf("%d ", Raiz->info);
    }
}

void Pre_Order_Folhas(ARVORE *Raiz) {
	if (Raiz != NULL) {
		if ((Raiz->esq == NULL) && (Raiz->dir == NULL)) {
        	printf("%d ", Raiz->info);
    	}
    	Pre_Order_Folhas(Raiz->esq);
    	Pre_Order_Folhas(Raiz->dir);
	}
}

int Altura_Arvore(ARVORE *Raiz) {
    if (Raiz == NULL) {
        return 0;
    }
    int altura_esq = Altura_Arvore(Raiz->esq);
    int altura_dir = Altura_Arvore(Raiz->dir);
    return 1 + (altura_esq > altura_dir ? altura_esq : altura_dir);
}

void Busca_No(ARVORE *Raiz, int val) {
	if (Raiz != NULL) {
		if (Raiz->info == val) {
			printf("%d ", Raiz->info);
			Pre_Order(Raiz->esq);
        	Pre_Order(Raiz->dir);
		}
        Busca_No(Raiz->esq, val);
        Busca_No(Raiz->dir, val);
    }
}

int main() {
    ARVORE *Raiz;
    int op, val;
    
    Raiz = NULL; // Arvore Vazia
    
    do {
        system("cls");
        puts("0 - Sair do Programa");
        puts("1 - Inserir Valor");
        puts("2 - Percursos PRE|IN|POS");
        puts("3 - Mostrar apenas os nos q sao folhas");
        puts("4 - Calcular altura da arvore");
        puts("5 - Buscar o no de um valor val");
        
        printf("\nDigite a opcao: ");
        scanf("%d", &op);
        
        switch (op) {
            case 1:
                printf("\nDigite o valor: ");
                scanf("%d", &val);
                Insere(&Raiz, val);
                break;
                
            case 2:
                if (Raiz == NULL)
                    printf("\nArvore vazia!");
                else {
                    printf("\nPRE: ");
                    Pre_Order(Raiz);
                    printf("\nIN : ");
                    In_Order(Raiz);
                    printf("\nPOS: ");
                    Pos_Order(Raiz);
                    printf("\n");
                }
                system("Pause");
                break;
                
            case 3:
                printf("\nFOLHAS: ");
                Pre_Order_Folhas(Raiz);
                printf("\n\n");
                system("Pause");
                break;
                
            case 4:
            	printf("ALTURA: %d", Altura_Arvore(Raiz));
                printf("\n\n");
                system("Pause");
                break;
                
            case 5:
            	printf("\nDigite o valor: ");
                scanf("%d", &val);
                Busca_No(Raiz, val);
                printf("\n\n");
                system("Pause");
                break;
        }
    } while (op != 0);
    
    return 0;
}

