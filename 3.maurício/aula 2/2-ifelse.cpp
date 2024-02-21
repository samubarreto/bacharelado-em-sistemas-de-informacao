/* Toda relação em Linguagem C retorna 1 (verdadeiro) ou 0 (falso). Portanto, uma relação pode ser até mesmo uma expressão aritmética. */

#include <stdio.h>

/*
main() {
	int num1, num2, num3, maior;
	
	printf("Insira o num1: ");
	scanf("%d", &num1);
	maior = num1;
	
	printf("Insira o num2: ");
	scanf("%d", &num2);
	if (num2 > maior)
		maior = num2;
	
	printf("Insira o num3: ");
	scanf("%d", &num3);
	if (num3 > maior) {
		maior = num3;
	};
	
	printf("\nmaior num: %d", maior);	
}
*/

/* 2 ou 1 com 3 jogadores */

main () {
	int p1, p2, p3;
	
	printf("Jogador 1: ");
	scanf("%d", &p1);
	
	printf("Jogador 2: ");
	scanf("%d", &p2);
	
	printf("Jogador 3: ");
	scanf("%d", &p3);
	
	if (p1 > 2 || p2 > 2 || p3 > 2 || p1 < 1 || p2 < 1 || p3 < 1) {
		printf("Valores incorretos");
	} else {
		if (p1 != p2 && p1 != p3) {
		printf("Jogador 1 venceu");
		} else if (p2 != p1 && p2 != p3) {
			printf("Jogador 2 venceu");
			
		} else if (p3 != p1 && p3 != p2) {
			printf("Jogador 3 venceu");
			
		} else {
			printf("Empate");
		};
	};
};
