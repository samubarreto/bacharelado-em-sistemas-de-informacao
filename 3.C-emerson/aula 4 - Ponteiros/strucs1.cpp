#include <stdio.h>

#define MAX_ALUNOS 5 // Definindo o tamanho ma
ximo do vetor de alunos

// Definindo a struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[MAX_ALUNOS]; // Declarando um vetor de structs Aluno com tamanho MAX_ALUNOS
    int i;

    // Preenchendo os dados dos alunos
    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    // Imprimindo os dados dos alunos
    printf("\nDados dos alunos:\n");
    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
        printf("\n");
    };
};
