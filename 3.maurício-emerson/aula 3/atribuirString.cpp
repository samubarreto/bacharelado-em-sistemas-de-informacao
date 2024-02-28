#include <stdio.h>
#include <string.h>

int main() {
    char senha[10], copia[10];
    
    printf("\nDigite a senha: ");
    fflush(stdin);
    fgets(senha, sizeof(senha), stdin);
    senha[strcspn(senha, "\n")] = '\0'; // Remove a quebra de linha inserida pelo fgets
    
    strcpy(copia, senha);
    /* Faz a seguinte atribuicao: copia recebe o conteudo de senha */
    
    printf("A copia = %s\n", copia);
    
    return 0;
}
