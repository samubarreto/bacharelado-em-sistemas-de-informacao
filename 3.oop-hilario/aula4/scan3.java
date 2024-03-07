import java.util.Scanner;

public class scan3 {
  public static void main(String[] args) {
    // cria variável input do tipo Scanner, como instância da classe Scanner
    // (classe e tipo tem mesmo nome n sei pq)
    Scanner input = new Scanner(System.in);

    // escaneando
    System.out.print("Dias: ");
    int dias = input.nextInt();

    System.out.print("Horas: ");
    int horas = input.nextInt();

    System.out.print("Minutos: ");
    int minutos = input.nextInt();

    System.out.print("Segundos: ");
    int segundos = input.nextInt();
    input.nextLine();

    // fecha o bagui
    input.close();

    // faz o cálculo
    int res = segundos + (minutos * 60) + (horas * 3600) + (dias * 86400);

    // exibe na tela
    System.out.printf("\nTotal: %d segundos", res);
  }
}
