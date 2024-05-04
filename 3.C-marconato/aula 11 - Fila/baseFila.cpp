#include <stdio.h>
#include <stdlib.h>

#define tam 10
// Definicao da estrutura da MinhaFila circular
typedef struct {
  int val[tam];
  int inicio, fim;
} Fila;

// Funcao para verificar se a MinhaFila esta cheia
int Cheia(Fila *MinhaFila) {
  return (MinhaFila->inicio == 0 && MinhaFila->fim == tam - 1) || (MinhaFila->inicio == MinhaFila->fim + 1);
}
// Funcao para verificar se a MinhaFila esta vazia
int Vazia(Fila *MinhaFila) {
  return MinhaFila->inicio == -1;
}

// Funcao para Iniciar a MinhaFila
void fila_vazia(Fila *MinhaFila) {
  MinhaFila->inicio = -1;
  MinhaFila->fim = -1;
}

// Funcao para inserir no final da MinhaFila
void ins_fila(Fila *MinhaFila, int value) {
  if (Cheia(MinhaFila)) {
    printf("Fila cheia. Nao e possivel adicionar elementos.\n");
    return;
  }
  if (Vazia(MinhaFila)) {
    MinhaFila->inicio = 0;
    MinhaFila->fim = 0;
  } else {
    MinhaFila->fim = (MinhaFila->fim + 1) % tam;
  }
  MinhaFila->val[MinhaFila->fim] = value;
}

// Funcao para remover e retornar o valor inicial da MinhaFila
int rem_fila(Fila *MinhaFila) {
  int removerval;
  if (Vazia(MinhaFila)) {
    printf("Fila vazia. Nao e possivel remover elementos.\n");
    return -1;
  }
  removerval = MinhaFila->val[MinhaFila->inicio];
  if (MinhaFila->inicio == MinhaFila->fim) {
    MinhaFila->inicio = -1;
    MinhaFila->fim = -1;
  } else {
    MinhaFila->inicio = (MinhaFila->inicio + 1) % tam;
  }
  return removerval;
}

// Funcao para exibir os elementos da MinhaFila
void imprime(Fila *MinhaFila) {
  int i;
  if (Vazia(MinhaFila)) {
    printf("Fila vazia.\n");
    return;
  }
  printf("Elementos na MinhaFila: ");
  for (i = MinhaFila->inicio; i != MinhaFila->fim; i = (i + 1) % tam) {
    printf("%d ", MinhaFila->val[i]);
  }
  printf("%d\n", MinhaFila->val[i]);
}

// Elabore uma funcao que retorne com o numero de elementos que existem em uma determinada MinhaFila, passada como parametro.
int tamanhoFila(Fila *MinhaFila) {
	int i, total = 1;
	if (Vazia(MinhaFila)) {
		return 0;
	}
	for (i = MinhaFila -> inicio; i != MinhaFila -> fim; i = (i + 1) % tam) {
		total++;
	}
	return total;
}

// Elabore uma func que esvazie uma fila recebida como parametro.
void esvaziarFila(Fila *MinhaFila) {
	int rem;
	while (!Vazia(MinhaFila)) {
		rem = rem_fila(MinhaFila);
	}
}

//Elabore uma função que receba duas filas como parâmetros e seus respectivos tamanhos. A função deverá retornar com uma outra fila formada pela junção (união) das duas filas, de tal forma que serão removidos um elemento de cada fila alternadamente até que ambas estejam vazias.
Fila juntarFila(Fila *MinhaFila1, Fila *MinhaFila2) {
	int rem;
	Fila filaj;
	fila_vazia(&filaj);
	while(!Vazia(fila1) && !Vazia(fila2)) {
		rem = rem_fila(fila1);
		ins_fila(&filaj, rem);
		rem = rem_fila(fila2);
		ins_fila(&filaj, rem);
	}
}

int main() {
  Fila MinhaFila;
  Fila MinhaFila2;
  fila_vazia(&MinhaFila2);
  fila_vazia(&MinhaFila);

  ins_fila(&MinhaFila2, 5);
  ins_fila(&MinhaFila2, 3);
  ins_fila(&MinhaFila2, 1);
  ins_fila(&MinhaFila2, 2);
  ins_fila(&MinhaFila2, 7);

  int v, r;
  printf("digite o primeiro valor: ");
  scanf("%d", &v);

  ins_fila(&MinhaFila, v);

  printf("digite o outro valor: ");
  scanf("%d", &v);

  ins_fila(&MinhaFila, v);

  printf("digite mais uma valor: ");
  scanf("%d", &v);

  ins_fila(&MinhaFila, v);

  imprime(&MinhaFila);

  r = rem_fila(&MinhaFila);

  printf("Valor removido da MinhaFila: %d \n", r);

  // printf("Valor removido da MinhaFila: %d \n",rem_fila(&MinhaFila));
  imprime(&MinhaFila);
  
  tamanhoFila(&MinhaFila);
  esvaziarFila(&MinhaFila);
  printf(tamanhoFila(&MinhaFila));
  imprime(&MinhaFila);
  return 0;
}
