#include <stdio.h>
#include <string.h> // Incluímos a biblioteca string.h para usar a função strcpy()

// Definimos a struct PESSOA
typedef struct {
    char nome[40];
    int idade;
} PESSOA;

int main() { // Corrigimos a declaração da função main para retornar int

    PESSOA a, b; // Declaramos duas variáveis do tipo PESSOA: a e b
    PESSOA *pestrutura; // Declaramos um ponteiro para PESSOA

    pestrutura = &a; // Atribuímos o endereço de a ao ponteiro pestrutura

    printf("Informe o nome: ");
    gets(pestrutura->nome); // Corrigimos o operador de seta para acessar o nome da estrutura através do ponteiro

    printf("Informe a idade: ");
    scanf("%d", &pestrutura->idade); // Corrigimos o operador de seta para acessar a idade da estrutura através do ponteiro

    // Copiamos os dados de a para b usando strcpy para o nome e atribuindo diretamente para a idade
    strcpy(b.nome, pestrutura->nome);
    b.idade = pestrutura->idade;

    printf("Nome: %s\n", b.nome);
    printf("Idade: %d\n", b.idade); // Corrigimos para %d para imprimir um inteiro

    return 0; // Retornamos 0 para indicar que o programa foi executado com sucesso
}

