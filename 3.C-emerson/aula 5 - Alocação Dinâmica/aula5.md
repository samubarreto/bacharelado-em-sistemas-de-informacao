# 12/03/2024 - Alocação Dinâmica

Alocar memória durante a execução do programa por meio de ponteiros.

stdlib.h é a lib com funcs para alocar memória:

```cpp
#include <stdlib.h>

int *p;
p = (int*) calloc (1, sizeof(int))
```
