#include <stdio.h>
main(){
int M[5][5], i, j;
puts("Digite os elementos da matriz:");
for (i=0; i<5; i++)
      for (j=0; j<5; j++)
	scanf("%d", &M[i][j]);
printf("Diagonal principal:");
for (i=0; i<5; i++)
    printf("%d ",M[i][i]);
printf("Diagonal secundaria:");
for (i=0; i<5; i++)
    printf("%d ",M[i][4-i]);
}

