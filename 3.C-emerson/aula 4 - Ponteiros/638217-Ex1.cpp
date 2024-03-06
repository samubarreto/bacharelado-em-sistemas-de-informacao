#include <stdio.h>

/* 1) Declare uma struct capaz de armazenar dados de alunos (RA, nome, e duas notas: n1 e n2).
Em seguida declare um ponteiro para esta estrutura. Leia os dados atraves deste ponteiro,
calcule e mostre a media do aluno.*/

typedef struct {
    char nome[40];
    int RA;
    float n1, n2, med;
} ALUNO;

int main () {
	
	ALUNO a1;
	ALUNO *ponteiroAluno = &a1;
	
	printf("Informe o nome: ");
    gets(ponteiroAluno -> nome);

    printf("Informe o RA: ");
    scanf("%d", &ponteiroAluno -> RA);
    
    printf("Informe a Nota 1: ");
    scanf("%f", &ponteiroAluno -> n1);
    
    printf("Informe a Nota 2: ");
    scanf("%f", &ponteiroAluno -> n2);
    
    ponteiroAluno -> med = (ponteiroAluno->n1 + ponteiroAluno->n2) / 2.0;
    
    printf("\nMedia do aluno %s: %.2f", ponteiroAluno -> nome, ponteiroAluno -> med);
};