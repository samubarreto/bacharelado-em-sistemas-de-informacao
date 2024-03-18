// Avaliação 01 - Linguagem de Programação JAVA

// Faça um programa que receba valores inteiros, armazenando esses valores em uma matriz 5x5 de nome A, receba separadamente um valor inteiro, armazenando ela em uma variável de nome X, verifique se o valor de X é par ou impar e crie uma nova matriz de nome B, usando os valores da matriz A de 2 formas:
// 1) multiplicando o valor da matriz A pelo valor de X, caso o valor de A seja semelhante ao valor da variável X (par ou impar).
// 2) copiando o valor da matriz A para a matriz B, caso o valor de A seja diferente do valor de X (par ou impar)

// Obs: Salvar o programa com o nome "seuRA_av_01.java" -- Professor, não é possível a classe com um número.

import java.util.Scanner;

public class RA638217_av_01 {
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

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        if ((A[i][j] % 2 == 0 && x % 2 == 0) || (A[i][j] % 2 != 0 && x % 2 != 0)) {
          B[i][j] = A[i][j] * x;
        } else {
          B[i][j] = A[i][j];
        }
      }
    }

    input.close();
  }
}