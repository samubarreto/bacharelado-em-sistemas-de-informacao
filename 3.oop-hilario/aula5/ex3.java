import java.util.Scanner;

public class ex3 {
  public static void main(String[] args) {
    int A[][] = new int[3][5];
    int x;

    Scanner input = new Scanner(System.in);

    System.out.print("X: ");
    x = input.nextInt();

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf("Digite o valor para A[%d][%d]: ", i + 1, j + 1);
        A[i][j] = input.nextInt();
      }
    }

    input.close();

    if (x % 2 == 0) {
      System.out.println("Pares:");
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
          if (A[i][j] % 2 == 0)
            System.out.printf("%d ", A[i][j]);
        }
      }
    } else {
      System.out.println("Impares:");
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
          if (A[i][j] % 2 != 0)
            System.out.printf("%d ", A[i][j]);
        }
      }
    }
  }
}
