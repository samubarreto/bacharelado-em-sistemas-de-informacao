#include <stdio.h>

void trocaReferencia (int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
};

int *trocaValor (int a, int b) {
	static int res[2];
	res[0] = b;
	res[1] = a;
	return res;
};

main () {
	int x = 5, y = 10;
	printf("Original: X = %d e Y = %d\n\n", x, y);
	
	int *res = trocaValor(x, y);
	printf("trocaValor: X = %d e Y = %d\n\n", res[0], res[1]);
	
	printf("Original: X = %d e Y = %d\n\n", x, y);
	
	trocaReferencia(&x, &y);
	printf("trocaReferencia: X = %d e Y = %d\n\n", x, y);
	
	printf("Original: X = %d e Y = %d\n\n", x, y);
};
