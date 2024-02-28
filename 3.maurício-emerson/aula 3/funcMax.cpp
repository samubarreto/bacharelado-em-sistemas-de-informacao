#include <stdio.h>

/* declaracao da funcao maximo */
int maximo (int x, int y)  {
	if (x >= y)
		return x;
	else
		return y;
}

main ( )  {
	int a,b, maior;
	printf ("\n Digite dois valores: ");
	scanf ("%d %d", &a, &b);
	maior = maximo(a,b);
	printf ("\n O maior = %d ", maior);  
}
