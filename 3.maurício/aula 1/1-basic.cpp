// /* definições de pré-processamento */

#include <stdio.h>

// /* definições de variáveis globais */

char opcao;
int idade;
float x, y;
double numeroDuplo;
void *ponteiroVoid;

// void main() {

//   /* variáveis locais */

//   /* corpo do programa */

// }

// /* outras funções */

// /* Este programa mostra a mensagem Hello World!! na tela \\// */

int main() {
	printf(“Hello World!!\n”);
return 0;
} 

// INICIALIZAÇÃO DE VARIÁVEIS
iniciandoVariaveis() {
	int cont=0;
	float taxa=1.2, taxa_anual=1.4;
	char opcao=‘A’;
	printf(“\n Valor de cont=%d”, cont);
	printf(“\n Valor de taxa=%f”, taxa);
	printf(“\n Valor de taxa_anual=%f”, taxa_anual);
	printf(“\n Valor de opcao=%c”, opcao);
} /*Fim função main*/

// OPERADOR DE ATRIBUIÇÃO
operadorAtribuicao() {
	int a, b = 10,c,d;
	a = b * 2;
	c = d = a;
	printf(“\n a=%d \n b=%d \n c=%d \n d=%d”, 
                       a,b,c,d);
} /*Fim funcao main*/

// OPERADORES ARITMÉTICOS
operadoresAritmeticos() {
	int a,b,c,d;
	a = 10;
	b = c = a*2;
	d = c%a;
	printf(“\n a=%d \n b=%d \n c=%d \n 
                     d=%d”,a,b,c,d);
} /*Fim main*/

// INCREMENTO E DECREMENTO
incrementoDecremento1() {
	int a, b;
	a = 15; // a -> 16 
	b = ++a; // b -> 16

	a = 15; // a -> 16
	b = a++; // b -> 15
}

// INCREMENTO E DECREMENTO
incrementoDecremento2() {
	int a=0,b=1;
	a++;	/*Equivalente a fazer:  a=a + 1  */
	b--;	/*Equivalente a fazer:  b=b - 1   */
	printf(“\n Valor de a=%d \n Valor de b=%d”, a,b);
}/*Fim main*/

// OPERADORES RELACIONAIS
operadoresRelacionais() {
	int verdadeiro, falso;
	verdadeiro = (15 < 20);
	falso = (15 == 20);
	printf(“\n VERDADEIRO=%d,  FALSO=%d”, verdadeiro, falso);
} /*Fim main*/

// PRINTF
printFunc( ) {
   int car = ‘A’;
   printf(“ O caractere %c \n  “, car);
   printf(“ E’ em decimal %d \n “, car);
   printf(“ e  em hexadecimal %x \n “, car);
   printf(“ Nro. de bytes que ocupa na memoria=%d \n”, 
            sizeof(car));
}/*Fim main*/

// PRINTF2
// Caracteres Especiais
// \a 	apito
// \b 	retrocede uma posição
// \\ 	o caractere \
// \n 	nova linha e outros
// \t	coloca um TAB
// \”	o caractere aspas (“)
// \f	salta página de formulário
