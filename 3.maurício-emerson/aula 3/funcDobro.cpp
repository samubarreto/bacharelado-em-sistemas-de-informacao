#include <stdio.h>

int r;

int dobro(int x) {
    return 2 * x;
}

int main() {
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    r = dobro(a);
    printf("O dobro de %d = %d", a, r);
    return 0;
}
