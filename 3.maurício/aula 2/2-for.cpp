#include <stdio.h>

/* jeito certo de fazer um loop for */

/*

main () {
	int num, soma;
	
	for (num = 1, soma = 0; num <= 100; num++) {
		soma += num;
	};
	
	printf("soma de 1 ate 100: %d", soma);
};

*/

main () {
	int N, c;
	float total, atual;
	
	printf("Quantidade de produtos: ");
	scanf("%d", &N);
	
	for(c = 1, total = 0, atual = 0; c <= N; c++) {
		printf("Preco do produto %d: ", c);
		scanf("%f", &atual);
		total += atual;
	}
	printf("Preco total: R$%.2fa", total);
}
