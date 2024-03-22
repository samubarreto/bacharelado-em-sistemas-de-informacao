#include <stdio.h>
#include <string.h>

int main() {
    char cap[10], cidade[] = "Paris";
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite o nome da capital da Franca: ");
        fflush(stdin);
        gets(cap);
        
        if (strcmp(cap, cidade) != 0)
            printf("Voce errou. Tente outra vez!\n\n");
        else {
            printf("Voce acertou!\n");
            break;
        };
    };
    return 0;
};