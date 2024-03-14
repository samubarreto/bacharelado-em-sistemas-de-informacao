import java.util.Scanner;

public class ex1 {
  public static void main(String[] args) {
    int[] vet1 = new int[10];
    int[] vet2 = new int[10];

    Scanner input = new Scanner(System.in);

    for (int i = 0; i < 10; i++) {
      System.out.printf("Digite o valor para vetor 1.%d: ", i);
      vet1[i] = input.nextInt();
    }

    System.out.print("Digite o valor de x: ");
    int x = input.nextInt();
    input.close();

    for (int i = 0; i < 10; i++) {
      vet2[i] = vet1[i] * x;
    }

    System.out.println("Vetor 1:");
    for (int i = 0; i < 10; i++) {
      System.out.print(vet1[i] + " ");
    }
    System.out.println();

    System.out.println("Vetor 2:");
    for (int i = 0; i < 10; i++) {
      System.out.print(vet2[i] + " ");
    }
    System.out.println();
  }
}
