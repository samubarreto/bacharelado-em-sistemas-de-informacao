public class fibo {
  public static void main(String[] args) {
    int a = 0, b = 0, c = 1;
    int cont = 1;
    System.out.println("Fibonacci até o 30º termo: ");
    System.out.printf("1 ");
    while (cont <= 30) {
      a = b;
      b = c;
      c = a + b;
      System.out.printf("%d ", c);
      cont++;
    }
  }
}
// a b c
// 1 1 2 3 5 8 13
