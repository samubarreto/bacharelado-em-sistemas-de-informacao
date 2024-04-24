#include <stdio.h>
#include <stdlib.h>

#define tam 10

typedef struct 
{
  int topo;
  int info[tam];
} PILHA;

void Inicializa(PILHA *p)
{
  p->topo = -1;
}

int Cheia(PILHA *p)
{
  return (p->topo == tam - 1);
}

int Vazia(PILHA *p)
{
  return (p->topo == -1);
}

int Push(PILHA *p, int v)
{
  if (Cheia(p)) {
    printf("\nErro: Pilha cheia");
    return 0; // pilha cheia
  }
  p->info[++p->topo] = v;
  return 1;
}

int Pop(PILHA *p, int *v)
{
  if (Vazia(p)) {
    printf("\nErro: Pilha vazia");
    return 0; // pilha vazia
  }
  *v = p->info[p->topo--];
  return 1;
}

void Imprime(PILHA p)
{
  int i;
  for (i = p.topo; i >= 0; i--)
    printf("[ %d ]\n", p.info[i]);
}

void DecToBin(int *num)
{
    PILHA binario;
    Inicializa(&binario);

    while (*num > 0)
    {
      Push(&binario, *num % 2);
      *num /= 2;
    }

    printf("Representacao binaria: ");
    while (!Vazia(&binario))
    {
      int bit;
      Pop(&binario, &bit);
      printf("%d", bit);
    }
    printf("\n\n");
}

int main()
{
  int opcao, val;
  PILHA minhaPilha;
  Inicializa(&minhaPilha);

  do {
    system("cls");
    puts("1 - Inserir na pilha");
    puts("2 - Remover da pilha");
    puts("3 - Visualizar a pilha");
    puts("4 - Decimal para binario");
    puts("0 - Sair");

    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("\n>Digite o valor para inserir: ");
      scanf("%d", &val);
      if (Push(&minhaPilha, val))
        printf("Valor %d inserido com sucesso!\n\n", val);
      system("Pause");
      break;

    case 2:
      printf("\n>Digite o valor para remover: ");
      scanf("%d", &val);
      if (Pop(&minhaPilha, &val)) {
        printf("\nValor removido: %d\n\n", val);
      } else {
        printf("\nValor %d nao foi removido\n\n", val);
      }
      system("Pause");
      break;

    case 3:
      printf("\n>Sua Pilha:\n");
      Imprime(minhaPilha);
      system("Pause");
      break;
    
    case 4:
      printf("\n>Insira o decimal: ");
      scanf("%d", &val);
      DecToBin(&val);
      system("Pause");
      break;
    }
  } while (opcao != 0);
  return 0;
}
