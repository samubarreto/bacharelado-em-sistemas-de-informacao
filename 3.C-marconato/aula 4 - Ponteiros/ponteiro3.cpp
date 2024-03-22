#include <stdio.h>
#include <conio.h>
#define MAX 10

main () {
  int i, vetor[MAX], *pvetor=NULL;
  float s = 0, med;

  pvetor = vetor;
  puts("Digite as idades: ");

  for (i = 0; i < MAX; i++) {
    scanf("%d", (pvetor + i));
  }

  for (i = 0; i < MAX; i++) {
    s += *(pvetor + i);
  }

  med = s/MAX;
  printf("Media das idades = %.2f", med);
};