#include <stdio.h>

struct pessoa {
    char nome[30];
    char endereco[45];
    char cel[20];
    int idade;
};

int main() {
    struct pessoa pessoa1;
    printf("Digite o nome: ");
    scanf("%29s", &pessoa1.nome);
    
    printf("Digite o endereco: ");
    scanf("%44s", &pessoa1.endereco);
    
    printf("Digite o celular: ");
    scanf("%19s", &pessoa1.cel);
    
    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    printf("\nPropriedades da pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Endereco: %s\n", pessoa1.endereco);
    printf("Celular: %s\n", pessoa1.cel);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}
