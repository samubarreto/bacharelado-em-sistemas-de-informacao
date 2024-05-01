#include <stdio.h>
#include <stdlib.h>

#define tam 10 // Tamanho da fila
// Definição da estrutura da fila circular
typedef struct {
    int val[tam];
    int inicio, fim;
} FilaCircular;

// Função para verificar se a fila está cheia
int Cheia(FilaCircular *fila) {
    return (fila->inicio == 0 && fila->fim == tam - 1) || (fila->inicio == fila->fim + 1);
}
// Função para verificar se a fila está vazia
int Vazia(FilaCircular *fila) {
    return fila->inicio == -1;
}

// Função para Iniciar a fila
void fila_vazia(FilaCircular *fila) {
    fila->inicio = -1;
    fila->fim = -1;
}

// Função para inserir no final da fila
void ins_fila(FilaCircular *fila, int value) {
    if (Cheia(fila)) {
        printf("Fila cheia. Não é possível adicionar elementos.\n");
        return;
    }
    if (Vazia(fila)) {
        fila->inicio = 0;
        fila->fim = 0;
    } else {
        fila->fim = (fila->fim + 1) % tam;
    }
    fila->val[fila->fim] = value;
}

// Função para remover e retornar o valor inicial da fila
int rem_fila(FilaCircular *fila) {
    int removerval;
    if (Vazia(fila)) {
        printf("Fila vazia. Não é possível remover elementos.\n");
        return -1;
    }
    removerval = fila->val[fila->inicio];
    if (fila->inicio == fila->fim) {
        fila->inicio = -1;
        fila->fim = -1;
    } else {
        fila->inicio = (fila->inicio + 1) % tam;
    }
    return removerval;
}

// Função para exibir os elementos da fila
void imprime(FilaCircular *fila) {
    int i;
    if (Vazia(fila)) {
        printf("Fila vazia.\n");
        return;
    }
    printf("Elementos na fila: ");
    for (i = fila->inicio; i != fila->fim; i = (i + 1) % tam) {
        printf("%d ", fila->val[i]);
    }
    printf("%d\n", fila->val[i]);
}

int QuantidadeElementos(FilaCircular *fila)
{
	int i, total=1;
	if (Vazia(fila)) {
		return 0;
	}
	for (i = fila->inicio; i != fila->fim; i = (i + 1) % tam) {
        total++;
    }
    return total;
}

void EsvaziarFila(FilaCircular *fila) {
	 int rem;
	 while(!Vazia(fila)) {
	 	rem = rem_fila(fila);
	 }
	 return;
}

FilaCircular JuntarFilas(FilaCircular *fila1, FilaCircular *fila2){
	int rem;
	FilaCircular filaj;
	fila_vazia(&filaj);
	while(!Vazia(fila1) && !Vazia(fila2)) {
		rem = rem_fila(fila1);
		ins_fila(&filaj, rem);
		rem = rem_fila(fila2);
		ins_fila(&filaj, rem);
	}
	return filaj;
	
}

main()
{
	FilaCircular fila, filai, filap, filajunta;
	fila_vazia(&fila);
	
	int v, r;
	printf ("digite o primeiro valor: ");
	scanf ("%d", &v);
	
	ins_fila(&fila, v);

    printf ("digite o outro valor: ");
	scanf ("%d", &v);
	
	ins_fila(&fila, v);
	
	printf ("digite mais uma valor: ");
	scanf ("%d", &v);
		
	ins_fila(&fila, v);
	
	imprime(&fila);
	
	r = QuantidadeElementos(&fila);
	printf("\nA fila possui %d elementos\n", r);
	
	r = rem_fila(&fila);
	
	printf("Valor removido da fila: %d \n",r);
	
//	printf("Valor removido da fila: %d \n",rem_fila(&fila));
	
	imprime(&fila);
	
	r = QuantidadeElementos(&fila);
	printf("\nAgora a fila possui %d elementos\n", r);
	
	printf("\nUtilizando a funcao que esvazia a fila!\n");
	EsvaziarFila(&fila);
	imprime(&fila);
	
	
	fila_vazia(&filai);
	ins_fila(&filai, 1);
	ins_fila(&filai, 3);
	ins_fila(&filai, 5);
	ins_fila(&filai, 7);
	ins_fila(&filai, 9);
	
	imprime(&filai);	

    fila_vazia(&filap);
	ins_fila(&filap, 2);
	ins_fila(&filap, 4);
	ins_fila(&filap, 6);
	ins_fila(&filap, 8);
	ins_fila(&filap, 10);
	
	imprime(&filap);	
	
	filajunta = JuntarFilas(&filai, &filap);
	
	printf("\nImprimindo a fila resultante\n");
	imprime(&filajunta);
	
	printf("\nImprimindo a fila 1\n");
	imprime(&filai);
	printf("\nImprimindo a fila 2\n");
	imprime(&filap);
}
