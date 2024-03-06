#include <stdio.h>
#include <conio.h>

main () {
	int x = 10, y = 20;
	int *ponteiro1, *ponteiro2;
	
	ponteiro1 = &x;
	ponteiro2 = &y;
	
	printf("\nO valor de ponteiro 1 (endereco de x): %p", ponteiro1); // valor de ponteiro1, endereco de x (ponteiro1)
	printf("\nO conteudo de ponteiro 1 (valor de x): %d\n", *ponteiro1); // valor de x, conteudo de ponteiro1 (*ponteiro1)

	printf("\nO valor de ponteiro 2 (endereco de y): %p", ponteiro2); // valor de ponteiro2, endereco de y (ponteiro2)
	printf("\nO conteudo de ponteiro 2 (valor de y): %d", *ponteiro2); // valor de y, conteudo de ponteiro2 (*ponteiro2)
	
	*ponteiro1 = *ponteiro2; // mesma coisa que x = y
	printf("\n\nO valor de x: %d", x);
	printf("\nO valor de y: %d", y);
	
	ponteiro2 = ponteiro1; // atribui o endereco de ponteiro1 em ponteiro2
	
	*ponteiro2 = 30; // alterando o valor de x para 30
	printf("\n\nValor de x = %d e Conteudo de ponteiro1 = %d", x, *ponteiro1);
	
};
