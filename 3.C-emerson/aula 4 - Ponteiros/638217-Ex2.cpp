#include <stdio.h>

/* 2) Idem ao primeiro, porem crie um vetor capaz de armazenar 10 alunos.
Mostre a media dos 10 alunos. */

typedef struct {
    char nome[50];
    int RA;
    float n1, n2;
} Aluno;

int main() {
    Aluno alunos[10];
    Aluno *ptrAluno = alunos;
    float mediaTurma = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nNome do aluno %d: ", i + 1);
        scanf("%s", (ptrAluno + i)->nome);

        printf("RA do aluno %d: ", i + 1);
        scanf("%d", &(ptrAluno + i)->RA);
        
        printf("Nota 1 do aluno %d: ", i + 1);
        scanf("%f", &(ptrAluno + i)->n1);
        
        printf("Nota 2 do aluno %d: ", i + 1);
        scanf("%f", &(ptrAluno + i)->n2);
    }

    for (int i = 0; i < 10; i++) {
        mediaTurma += ((ptrAluno + i)->n1 + (ptrAluno + i)->n2) / 2.0;
    }
    mediaTurma /= 10.0;
    printf("\nMedia da turma: %.2f\n", mediaTurma);
};