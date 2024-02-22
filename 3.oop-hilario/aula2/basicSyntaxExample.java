public class basicSyntaxExample {
  public static void main(String[] args) {
    // Declaração e inicialização de variáveis
    int idade = 25;
    String nome = "João";
    double altura = 1.75;

    // Estrutura condicional if-else
    if (idade >= 18) {
      System.out.println(nome + " é maior de idade e tem " + altura + " metros de altura.");
    } else {
      System.out.println(nome + " é menor de idade e tem " + altura + " metros de altura.");
    }

    // Estrutura de repetição for
    for (int i = 0; i < 5; i++) {
      System.out.println("Contagem: " + i);
    }

    // Estrutura de repetição while
    int contador = 0;
    while (contador < 3) {
      System.out.println("While loop: " + contador);
      contador++;
    }

    // Estrutura de repetição do-while
    int numero = 0;
    do {
      System.out.println("Do-while loop: " + numero);
      numero++;
    } while (numero < 3);

    // Switch-case
    int opcao = 2;
    switch (opcao) {
      case 1:
        System.out.println("Opção 1 selecionada");
        break;
      case 2:
        System.out.println("Opção 2 selecionada");
        break;
      default:
        System.out.println("Opção inválida");
    }

    // Arrays
    int[] numeros = { 1, 2, 3, 4, 5 };
    for (int num : numeros) {
      System.out.println("Elemento do array: " + num);
    }

    // Métodos
    int resultado = soma(3, 4);
    System.out.println("Resultado da soma: " + resultado);
  }

  // Método que realiza a soma de dois números
  public static int soma(int a, int b) {
    return a + b;
  }
}
