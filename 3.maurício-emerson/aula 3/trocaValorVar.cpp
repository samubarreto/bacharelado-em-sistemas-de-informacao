#include <stdio.h>
// altera os valores de a e b (variaveis por referencia)

trocaReferencia (int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
};

// passando varivaeis por valor

int trocaValor (int a, int b) {
	int res[2];
	res[0] = b;
	res[1] = a;
	return res;
};

main () {
	int x = 5, y = 10; a; b;
	printf ("X = %d e Y = %d\n", x, y);
	trocaValor(x, y);
	printf ("X = %d e Y = %d\n", a, b);
	trocaReferencia(&x, &y);
	printf ("X = %d e Y = %d\n", x, y);
};
