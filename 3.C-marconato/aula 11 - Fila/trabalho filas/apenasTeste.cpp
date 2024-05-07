#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRIORITY 4
#define MAX_NORMAL_PRIORITY 1000
#define MAX_ELDERLY_PRIORITY 2000
#define MAX_DISABLED_PRIORITY 3000
#define MAX_PREGNANT_PRIORITY 4000

// Definição da estrutura do nó da fila
typedef struct Node {
    char senha[10];
    struct Node *next;
} Node;

// Definição da estrutura da fila
typedef struct {
    Node *front;
    Node *rear;
} Queue;

// Inicializa a fila
void initializeQueue(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

// Verifica se a fila está vazia
int isEmpty(Queue *q) {
    return (q->front == NULL);
}

// Insere um elemento na fila
void enqueue(Queue *q, char *senha) {
    Node *temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL) {
        printf("Erro: Memória insuficiente!\n");
        return;
    }
    strcpy(temp->senha, senha);
    temp->next = NULL;
    if (isEmpty(q)) {
        q->front = q->rear = temp;
    } else {
        q->rear->next = temp;
        q->rear = temp;
    }
}

// Remove um elemento da fila e retorna sua senha
char* dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Fila vazia!\n");
        return NULL;
    }
    Node *temp = q->front;
    char *senha = (char*)malloc(sizeof(char) * 10);
    strcpy(senha, temp->senha);
    q->front = q->front->next;
    free(temp);
    if (q->front == NULL) {
        q->rear = NULL;
    }
    return senha;
}

// Imprime os elementos da fila
void displayQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Fila vazia!\n");
        return;
    }
    Node *temp = q->front;
    while (temp != NULL) {
        printf("%s ", temp->senha);
        temp = temp->next;
    }
    printf("\n");
}

// Gera uma senha de acordo com a prioridade
char* generateSenha(int priority, int *counter) {
    char *senha = (char*)malloc(sizeof(char) * 10);
    switch (priority) {
        case 1: // Deficientes
            sprintf(senha, "D%d", MAX_DISABLED_PRIORITY + (*counter)++);
            break;
        case 2: // Idosos
            sprintf(senha, "I%d", MAX_ELDERLY_PRIORITY + (*counter)++);
            break;
        case 3: // Gestantes
            sprintf(senha, "G%d", MAX_PREGNANT_PRIORITY + (*counter)++);
            break;
        default: // Normal
            sprintf(senha, "N%d", MAX_NORMAL_PRIORITY + (*counter)++);
            break;
    }
    return senha;
}

// Insere uma pessoa na fila com base na prioridade
void insertPerson(Queue *q, int priority, int *counter) {
    char *senha = generateSenha(priority, counter);
    Node *temp = q->front;
    Node *prev = NULL;
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro: Memória insuficiente!\n");
        return;
    }
    strcpy(newNode->senha, senha);
    newNode->next = NULL;
    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        // Deficientes têm prioridade máxima
        if (priority == 1) {
            newNode->next = q->front;
            q->front = newNode;
        } else {
            while (temp != NULL && temp->senha[0] < senha[0]) {
                prev = temp;
                temp = temp->next;
            }
            if (prev == NULL) { // Insere no início
                newNode->next = q->front;
                q->front = newNode;
            } else {
                newNode->next = prev->next;
                prev->next = newNode;
            }
            if (temp == NULL) { // Insere no final
                q->rear->next = newNode;
                q->rear = newNode;
            }
        }
    }
    free(senha);
}

// Remove uma pessoa da fila
void removePerson(Queue *q) {
    if (isEmpty(q)) {
        printf("Fila vazia!\n");
        return;
    }
    char *senha = dequeue(q);
    printf("Pessoa com senha %s removida da fila.\n", senha);
    free(senha);
}

int main() {
    Queue q;
    initializeQueue(&q);
    int counter[MAX_PRIORITY] = {0};
    int option, priority;

    do {
        printf("\n===== Menu =====\n");
        printf("1. Inserir pessoa na fila\n");
        printf("2. Remover pessoa da fila\n");
        printf("3. Visualizar fila\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Prioridade (0-Normal, 1-Deficiente, 2-Idoso, 3-Gestante): ");
                scanf("%d", &priority);
                if (priority < 0 || priority > 3) {
                    printf("Opção inválida!\n");
                    break;
                }
                insertPerson(&q, priority, counter);
                break;
            case 2:
                removePerson(&q);
                break;
            case 3:
                printf("Fila de espera:\n");
                displayQueue(&q);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 4);

    return 0;
}

