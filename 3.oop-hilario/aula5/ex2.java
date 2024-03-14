import java.util.Scanner;

public class ex2 {
  public static void main(String[] args) {
    int A[][] = new int[5][5];
    int B[][] = new int[5][5];
    int C[][] = new int[5][5];

    Scanner input = new Scanner(System.in);

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf("Digite o valor para A[%d][%d]: ", i + 1, j + 1);
        A[i][j] = input.nextInt();
      }
    }

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf("Digite o valor para B[%d][%d]: ", i + 1, j + 1);
        B[i][j] = input.nextInt();
      }
    }

    input.close();

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        C[i][j] = A[i][j] + B[i][j];
      }
    }

    System.out.println("Matriz A:");
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf(A[i][j] + " ");
      }
      System.out.println();
    }
    System.out.println();

    System.out.println("Matriz B:");
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf(B[i][j] + " ");
        ;
        ;
      }
      System.out.println();
    }
    System.out.println();

    System.out.println("Matriz C:");
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.printf(C[i][j] + " ");
      }
      System.out.println();
    }
    System.out.println();
  };
};
