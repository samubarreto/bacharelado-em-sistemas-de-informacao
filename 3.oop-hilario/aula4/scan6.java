import java.util.Scanner;

public class scan6 {
  public static void main(String[] args) {
    // cria variável input do tipo Scanner, como instância da classe Scanner
    // (classe e tipo tem mesmo nome n sei pq)
    Scanner input = new Scanner(System.in);

    // escaneando
    System.out.print("Preço por litro de combustivel: R$");
    float precoLitro = input.nextFloat();

    System.out.print("Desempenho em km/litro: ");
    float desempenho = input.nextFloat();

    System.out.print("Distancia percorrida: ");
    float distancia = input.nextFloat();

    input.nextLine();

    // fecha o bagui
    input.close();

    // faz o cálculo
    float litrosUsados = distancia / desempenho;
    float dinheiroGasto = precoLitro * litrosUsados;

    // exibe na tela
    System.out.printf("\nSerão gastos %.2fL e R$%.2f na viagem", litrosUsados, dinheiroGasto);
  }
}
