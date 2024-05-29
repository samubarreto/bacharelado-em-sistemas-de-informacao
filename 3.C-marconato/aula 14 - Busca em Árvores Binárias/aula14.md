# 28/05/2024 - Buscas em árvores binárias (binary search)

* ISSO É BUSCA BINÁRIA -> Menor que o nó pai? esquerda : direita

1. Exercício
   1. PRE: 50 40 30 10 20 100 70 60 90 120
   2. IN: 10 20 30 40 50 60 70 90 100 120
   3. POS: 20 10 30 40 60 90 70 120 100 50
2. Exercício
   1. Não sei, provavelmente sim.
3. Exercício
   1. ```cpp
      int Altura_Arvore(ARVORE *Raiz) {
          if (Raiz == NULL) {
              return 0;
          }
          int altura_esq = Altura_Arvore(Raiz->esq);
          int altura_dir = Altura_Arvore(Raiz->dir);
          return 1 + (altura_esq > altura_dir ? altura_esq : altura_dir);
      }
      ```
