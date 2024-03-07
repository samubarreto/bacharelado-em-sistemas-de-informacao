public class fibo20 {
  public static void main(String[] args) {
    int primeiro = 0, segundo = 1, proximo;

    System.out.println("> 20 primeiros termos da sequência de Fibonacci, mostrando se é par ou ímpar: \n");
    System.out.println("1º ímpar > 1");

    for (int i = 1; i < 20; i++) {
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;

      if (proximo % 2 != 0) {
        System.out.printf("%dº ímpar > %d\n", i + 1, proximo);
      } else {
        System.out.printf("%dº par > %d\n", i + 1, proximo);
      }
    }
  }
}