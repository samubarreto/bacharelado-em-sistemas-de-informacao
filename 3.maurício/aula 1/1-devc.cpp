#include <stdio.h>

/*

main() {
	int num, dobro;
	printf("Insira um numero: ");
	fflush(stdout); // Limpa o buffer de sa�da para exibir a mensagem imediatamente
	scanf("%d", &num); // L� o n�mero inserido pelo usu�rio
	dobro = num * 2; // Calcula o dobro do n�mero
	printf("%d * 2 = %d\n", num, dobro); // Imprime o n�mero e seu dobro
}

*/

/*

main() {
	char nome[30];
	printf("Digite um nome: ");
	gets(nome);
	printf("Nome: %s", nome);
}

*/


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

	printf("%d", maior);
	
}

*/

#include <stdio.h>

int main() { int a, b, c; scanf("%d%d%d", &a, &b, &c); printf("%d\n", (a > b && a > c) ? a : (b > c) ? b : c); return 0; }

