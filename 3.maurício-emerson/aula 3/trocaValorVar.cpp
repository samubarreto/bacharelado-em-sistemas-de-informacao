#include <stdio.h>
// altera os valores de a e b (vari�veis por refer�ncia)

troca(int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
};

main()
{
	int x = 5, y = 10;
	printf ("X = %d e Y = %d", x, y);
	troca (&x, &y);   // endere�o de x e de y
	printf ("X = %d e Y = %d", x,y);
}

