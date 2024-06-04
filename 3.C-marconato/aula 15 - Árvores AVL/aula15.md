# 04/06/2024 - Árvores AVL

### Características de uma Árvore AVL

* **Balanceamento**:
  * Em uma árvore AVL, a diferença de altura entre a subárvore esquerda e a subárvore direita de qualquer nó (chamado de fator de balanceamento) deve ser no máximo 1. Isso garante que a árvore esteja aproximadamente equilibrada em termos de altura.
* **Altura Logarítmica**:
  * Devido ao balanceamento, a altura da árvore AVL é 𝑂(log⁡𝑛)**O**(**lo**g**n**), onde 𝑛**n** é o número de nós na árvore. Isso permite operações de busca, inserção e remoção em tempo logarítmico.
* **Rotação**:
  * Para manter o balanceamento após inserções e remoções, são utilizadas rotações (simples e duplas) nos nós da árvore. As rotações são operações que reestruturam a árvore sem alterar a ordem dos elementos.

### Operações em Árvores AVL

* **Inserção**:
  * Após inserir um novo nó, verifica-se o fator de balanceamento de todos os nós afetados. Se um nó estiver desequilibrado, aplica-se uma rotação para restaurar o balanceamento.
* **Remoção**:
  * Semelhante à inserção, após remover um nó, verifica-se o fator de balanceamento e aplica-se rotações conforme necessário para manter a árvore equilibrada.
* **Busca**:
  * A operação de busca é semelhante à de uma árvore binária de busca comum, mas devido ao balanceamento garantido, a eficiência da busca é melhorada.

### Exemplos de Rotações

* **Rotação Simples à Direita (Right Rotation, RR)** :
  * Aplicada quando a subárvore esquerda de um nó está desbalanceada para a esquerda.
* **Rotação Simples à Esquerda (Left Rotation, LL)** :
  * Aplicada quando a subárvore direita de um nó está desbalanceada para a direita.
* **Rotação Dupla à Direita (Right-Left Rotation, RL)** :
  * Aplicada quando um nó está desbalanceado para a direita e a subárvore direita está desbalanceada para a esquerda.
* **Rotação Dupla à Esquerda (Left-Right Rotation, LR)** :
  * Aplicada quando um nó está desbalanceado para a esquerda e a subárvore esquerda está desbalanceada para a direita.

### Vantagens das Árvores AVL

* **Eficiência** : Operações de inserção, remoção e busca são realizadas em tempo 𝑂(log⁡𝑛)**O**(**lo**g**n**).
* **Estrutura Balanceada** : Mantém a árvore balanceada automaticamente, evitando cenários extremos que podem ocorrer em árvores binárias de busca comuns, como uma árvore linear que degrada a eficiência.

### Desvantagens das Árvores AVL

* **Complexidade de Implementação** : As rotações e verificações de balanceamento adicionam complexidade ao código.
* **Overhead de Manutenção** : Manter o balanceamento da árvore pode introduzir um overhead adicional em comparação com árvores binárias de busca simples.

Árvores AVL são muito úteis em cenários onde operações rápidas de busca, inserção e remoção são cruciais, como em bancos de dados e sistemas que requerem acesso eficiente a grandes conjuntos de dados ordenados.
