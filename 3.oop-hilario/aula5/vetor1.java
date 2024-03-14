public class vetor1 {
  public static void main(String[] args) {
    // 1. Declaração de um vetor:
    // Para declarar um vetor em Java, você especifica o tipo dos elementos seguido
    // por colchetes [] e o nome do vetor.
    int exemplo[];
    int[] meuVetor1 = { 1, 2, 3 };

    // 2. Inicialização de um vetor:
    // Você pode inicializar um vetor ao mesmo tempo que o declara, especificando os
    // valores dos elementos entre chaves {}.
    int[] meuVetor2 = { 10, 20, 30 };

    // Ou você pode inicializar um vetor sem especificar os valores, apenas
    // indicando o tamanho do vetor. Os elementos do vetor serão inicializados com
    // valores padrão para o tipo de dados.
    int[] meuVetor3 = new int[5];

    // 3. Acesso aos elementos do vetor:
    // Você pode acessar os elementos do vetor usando o nome do vetor seguido pelo
    // índice entre colchetes []. Lembre-se de que os índices em Java começam em 0.
    int primeiroElemento = meuVetor1[0];

    // 4. Alteração de elementos do vetor:
    // Você pode alterar os valores dos elementos do vetor da mesma maneira que os
    // acessa.
    meuVetor2[1] = 50;

    // 5. Comprimento do vetor:
    // Você pode obter o comprimento de um vetor usando a propriedade length.
    int tamanho = meuVetor3.length;
  }
}
