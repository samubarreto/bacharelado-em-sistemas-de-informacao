#include <stdio.h>

main () {
	int c = 1, password = 1234, attempt;
	
	while (c <= 3) {
		printf("Insira a senha: ");
		scanf("%d", &attempt);
		if (attempt == 1234) {
			printf("\nSenha correta\n");
			break;
		} else {
			if (c >= 3) {
				printf("\nAcabaram suas tentativas\n");
			} else {
				printf("\nSenha incorreta, tente novamente\n");
			};
			c++;
		};
	};
};
