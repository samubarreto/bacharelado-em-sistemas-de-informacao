import java.util.Scanner;

public class av_01_638217 {
  public static void main(String[] args) {
    int A[][] = new int[5][5];
    int B[][] = new int[5][5];
    int x;

    Scanner input = new Scanner(System.in);

    System.out.print("X: ");
    x = input.nextInt();

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf("Digite o valor para A[%d][%d]: ", i + 1, j + 1);
        A[i][j] = input.nextInt();
      }
    }

    input.close();

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        if ((A[i][j] % 2 == 0 && x % 2 == 0) || (A[i][j] % 2 != 0 && x % 2 != 0)) {
          B[i][j] = A[i][j] * x;
        } else {
          B[i][j] = A[i][j];
        }
      }
    }

    System.out.println("Matriz B:");
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf(B[i][j] + " ");
      }
      System.out.println();
    }
    System.out.println();

  }
}