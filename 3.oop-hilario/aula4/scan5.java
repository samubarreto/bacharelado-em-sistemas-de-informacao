import java.util.Scanner;

public class scan5 {
  public static void main(String[] args) {
    // cria variável input do tipo Scanner, como instância da classe Scanner
    // (classe e tipo tem mesmo nome n sei pq)
    Scanner input = new Scanner(System.in);

    // escaneando
    System.out.print("Salario: ");
    float salary = input.nextFloat();

    System.out.print("Aumento: ");
    float adjustment = input.nextFloat();

    input.nextLine();

    // fecha o bagui
    input.close();

    // faz o cálculo
    float res = salary + salary * (adjustment / 100);

    // exibe na tela
    System.out.printf("\nNovo salário: R$%.2f", res);
  }
}
