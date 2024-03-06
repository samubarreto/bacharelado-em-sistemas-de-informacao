#include <stdio.h>
#include <string.h> // Inclu�mos a biblioteca string.h para usar a fun��o strcpy()

// Definimos a struct PESSOA
typedef struct {
    char nome[40];
    int idade;
} PESSOA;

int main() { // Corrigimos a declara��o da fun��o main para retornar int

    PESSOA a, b; // Declaramos duas vari�veis do tipo PESSOA: a e b
    PESSOA *pestrutura; // Declaramos um ponteiro para PESSOA

    pestrutura = &a; // Atribu�mos o endere�o de a ao ponteiro pestrutura

    printf("Informe o nome: ");
    gets(pestrutura->nome); // Corrigimos o operador de seta para acessar o nome da estrutura atrav�s do ponteiro

    printf("Informe a idade: ");
    scanf("%d", &pestrutura->idade); // Corrigimos o operador de seta para acessar a idade da estrutura atrav�s do ponteiro

    // Copiamos os dados de a para b usando strcpy para o nome e atribuindo diretamente para a idade
    strcpy(b.nome, pestrutura->nome);
    b.idade = pestrutura->idade;

    printf("Nome: %s\n", b.nome);
    printf("Idade: %d\n", b.idade); // Corrigimos para %d para imprimir um inteiro

    return 0; // Retornamos 0 para indicar que o programa foi executado com sucesso
}

