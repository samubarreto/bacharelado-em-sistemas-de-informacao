#include <stdio.h>
#include <stdlib.h>

int* funcA(int tamanhoVetores) {
  int *vet = (int*)malloc(tamanhoVetores * sizeof(int));
  return vet;
}

void funcB(int *ptr, int tamanhoVetores) {
  printf("Digite os elementos do vetor:\n");
  for (int i = 0; i < tamanhoVetores; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &ptr[i]);
  }
}

void funcC(int *ptr, int tamanhoVetores) {
  printf("Seu vetor: ");
  for (int i = 0; i < tamanhoVetores; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");
}

void funcD(int *ptr, int tamanhoVetores) {
  int temp;
  for (int i = 0; i < tamanhoVetores - 1; i++) {
    for (int j = 0; j < tamanhoVetores - i - 1; j++) {
      if (ptr[j] > ptr[j + 1]) {
        temp = ptr[j];
        ptr[j] = ptr[j + 1];
        ptr[j + 1] = temp;
      }
    }
  }
  funcC(ptr, tamanhoVetores);
}

void funcE(int *ptr1, int *ptr2, int tamanhoVetores) {
  int *vet3 = funcA(tamanhoVetores);

  for (int i = 0; i < tamanhoVetores; i++) {
    if (i % 2 == 0) {
      vet3[i] = ptr1[i];
    } else {
      vet3[i] = ptr2[i];
    }
  }
  funcC(vet3, tamanhoVetores);
}
int main() {
  int tamanhoVetores = 5;

  // A, B e C
  printf("Vetor alocado dinamicamente:\n");
  int *vetorAlocado1 = funcA(tamanhoVetores);
  funcB(vetorAlocado1, tamanhoVetores);
  funcC(vetorAlocado1, tamanhoVetores);
  printf("\n");

  int *vetorAlocado2 = (int*)calloc(tamanhoVetores, sizeof(int));
  // B e C
  funcB(vetorAlocado2, tamanhoVetores);
  funcC(vetorAlocado2, tamanhoVetores);
  printf("\n");

  // D e C
  printf("Ordenando vetor exemplo 1:\n");
  funcD(vetorAlocado1, tamanhoVetores);
  printf("\n");

  // D e C
  printf("Ordenando vetor exemplo 2:\n");
  funcD(vetorAlocado2, tamanhoVetores);
  printf("\n");

  // E e C
  printf("Intercalando vetores exemplo 1 e 2:\n");
  funcE(vetorAlocado1, vetorAlocado2, tamanhoVetores);
  printf("\n");
}
