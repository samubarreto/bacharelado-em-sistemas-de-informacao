/*
638217 - Samuel Pereira Barreto
635601 - Bruno Freitas
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX_PRIORIDADE 4
#define MAX_PRIORIDADE_NORMAL 1000
#define MAX_PRIORIDADE_IDOSO 2000
#define MAX_PRIORIDADE_DEFICIENTE 3000
#define MAX_PRIORIDADE_GESTANTE 4000

// Definicao da estrutura do no da fila
typedef struct No {
  char senha[10];
  struct No *prox;
} No;

// Definicao da estrutura da fila
typedef struct {
  No *inicio;
  No *fim;
} Fila;

// Inicializa a fila
void inicializarFila(Fila *fila) {
  fila->inicio = NULL;
  fila->fim = NULL;
}

// Verifica se a fila esta vazia
int estaVazia(Fila *fila) {
  return (fila->inicio == NULL);
}

// Insere um elemento na fila
void enfileirar(Fila *fila, char *senha) {
  No *temp = (No*)malloc(sizeof(No));
  strcpy(temp->senha, senha);
  temp->prox = NULL;
  if (estaVazia(fila)) {
    fila->inicio = fila->fim = temp;
  } else {
    fila->fim->prox = temp;
    fila->fim = temp;
  }
}

// Remove um elemento da fila e retorna sua senha
char* desenfileirar(Fila *fila) {
  if (estaVazia(fila)) {
    printf("\nFila vazia!\n");
    return NULL;
  }
  No *temp = fila->inicio;
  char *senha = (char*)malloc(sizeof(char) * 10);
  strcpy(senha, temp->senha);
  fila->inicio = fila->inicio->prox;
  free(temp);
  if (fila->inicio == NULL) {
    fila->fim = NULL;
  }
  return senha;
}

// Imprime os elementos da fila
void exibirFila(Fila *fila) {
  if (estaVazia(fila)) {
    printf("\nFila vazia!\n");
    return;
  }
  No *temp = fila->inicio;
  while (temp != NULL) {
    printf("%s ", temp->senha);
    temp = temp->prox;
  }
  printf("\n");
}

// Gera uma senha de acordo com a prioridade
char* gerarSenha(int prioridade, int *contador) {
  char *senha = (char*)malloc(sizeof(char) * 10);
  switch (prioridade) {
    case 1: // Deficientes
      sprintf(senha, "D%d", MAX_PRIORIDADE_DEFICIENTE + (*contador)++);
      break;
    case 2: // Idosos
      sprintf(senha, "I%d", MAX_PRIORIDADE_IDOSO + (*contador)++);
      break;
    case 3: // Gestantes
      sprintf(senha, "G%d", MAX_PRIORIDADE_GESTANTE + (*contador)++);
      break;
    default: // Normal
      sprintf(senha, "N%d", MAX_PRIORIDADE_NORMAL + (*contador)++);
      break;
  }
  return senha;
}

// Insere uma pessoa na fila com base na prioridade
void inserirPessoa(Fila *fila, int prioridade, int *contador) {
  char *senha = gerarSenha(prioridade, contador);
  No *novoNo = (No*)malloc(sizeof(No));
  if (novoNo == NULL) {
    printf("\nErro: Mem�ria insuficiente!\n");
    return;
  }
  strcpy(novoNo->senha, senha);
  novoNo->prox = NULL;
  if (estaVazia(fila)) {
    fila->inicio = fila->fim = novoNo;
  } else {
    fila->fim->prox = novoNo;
    fila->fim = novoNo;
  }
  free(senha);
}

// Remove uma pessoa da fila
void removerPessoa(Fila *fila) {
  if (estaVazia(fila)) {
    printf("\nFila vazia!\n");
    return;
  }
  char *senha = desenfileirar(fila);
  printf("\nPessoa com senha %s removida da fila.\n", senha);
  free(senha);
}

int main() {
  Fila fila;
  inicializarFila(&fila);
  int contador[MAX_PRIORIDADE] = {0};
  int opcao, prioridade;

  do {
  	printf("\nPressione qualquer tecla para continuar...");
  	_getch();
  	system("cls");
    printf("\n===== Menu =====\n");
    printf("1. Inserir pessoa na fila\n");
    printf("2. Remover pessoa da fila\n");
    printf("3. Visualizar fila\n");
    printf("4. Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("Prioridade (0-Normal, 1-Deficiente, 2-Idoso, 3-Gestante): ");
        scanf("%d", &prioridade);
        if (prioridade < 0 || prioridade > 3) {
          printf("Opcao invalida!\n");
          break;
        }
        inserirPessoa(&fila, prioridade, contador);
        break;
      case 2:
        removerPessoa(&fila);
        break;
      case 3:
        printf("\nFila de espera:\n");
        exibirFila(&fila);
        break;
      case 4:
        printf("Saindo...\n");
        break;
      default:
        printf("Opcao invalida!\n");
    }
  } while (opcao != 4);
  return 0;
}
