#include <stdio.h>
#include <stdlib.h>

float maiorIdade(float *idades, int tamanho) {
  float maior = idades[0];
  for (int i = 1; i < tamanho; i++) {
    if (idades[i] > maior) {
        maior = idades[i];
    }
  }

  return maior;
}

int main() {

  float *idades = calloc(5, sizeof(float));

  idades[0] = 19;
  idades[1] = 29.8;
  idades[2] = 50.1;
  idades[3] = 23.09;
  idades[4] = 12;

  float maior = maiorIdade(idades, 5);
  printf("A maior idade é: %.2f\n", maior);
}
