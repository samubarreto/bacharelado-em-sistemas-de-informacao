#include <stdio.h>

main () {
	int vetorInt[10], i, maior, menor;
	puts("Digite os valores do vetor: ");
	for (i = 0; i < 10; i++) {
		printf("%d: ", i+1);
		scanf("%d", &vetorInt[i]);
	};
	
	maior = vetorInt[0];
	for (i = 1; i < 10; i++) {ll
		if (vetorInt[i] > maior) {
			maior = vetorInt[i];
		};
	};
	
	menor = vetorInt[0];
	for (i = 1; i < 10; i++) {
		if (vetorInt[i] < menor) {
			menor = vetorInt[i];
		};
	};
	printf("Maior num: %d\n", maior);
	printf("Menor num: %d", menor);
};
