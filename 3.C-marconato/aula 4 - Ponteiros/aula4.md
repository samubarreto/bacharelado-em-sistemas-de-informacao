# 05/03/2024 - Marconato

## Ponteiros - Aula 1

- Ponteiros são variáveis como qualquer outra, mas servem para armazenar a posição de outra variável na memória.
- São representados por dois conceitos: o endereço físico e o endereço lógico da variável apontada, além do conteúdo que está naquela posição de memória.
- Exemplo:

| Endereço Físico | Endereço Lógico | Conteúdo |
| --------------- | --------------- | -------- |
| 1000            | x               | 10       |
| 1002            | y               | 20       |
| 1004            | px              | 1000     |

- Permitem alterar valores de variáveis dentro de uma função, possibilitando uma manipulação mais direta da memória.
- São fundamentais para construir estruturas de dados mais complexas, como listas encadeadas e árvores.
- A sintaxe básica para declarar um ponteiro é: `<Tipo de Dado> * <Nome da Variável>;`

> Exemplo:

```cpp
#include <stdio.h>
#include <conio.h>

main () {
    int x, y;
    int *p1, *p2;
    char ch, *p3;
    p1 = &x; // armazena o endereço de x
    p2 = &y; // armazena o endereço de y
    // print p1 mostra o endereço, *p1 mostra o valor.
}
```

- & operador unário que retorna o endereço de memoria do seu operando;
- "\*" operador que retorna o valor da variável

### Atribuições em ponteiros:

- nomePonteiro = &nomeVariavel;
- nomeVariavel = \*nomePonteiro;
- nomePonteiro1 = nomePonteiro2;
- *nomePonteiro1 = *nomePonteiro2;

### Incremento e decremento:

- nomePonteiro++;
- nomePonteiro--;

O tipo base do ponteiro define quantos bytes serDeaão incrementados ou decrementados.

Assim, se o ponteiro for char, vai deslocar 1 byte. Se o ponteiro for double, vai deslocar 8 bytes.

### Vetores manipulam ponteiros, basicamente são ponteiros.

### Ponteiros para estruturas, no arquivo structs.cpp
