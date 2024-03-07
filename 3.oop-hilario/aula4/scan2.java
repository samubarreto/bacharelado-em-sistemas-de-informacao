import java.util.Scanner;

public class scan2 {
  public static void main(String[] args) {
    // cria variável console do tipo Scanner, como instância da classe Scanner
    // (classe e tipo tem mesmo nome n sei pq)
    Scanner console = new Scanner(System.in);

    // escaneando
    System.out.print("Nome: ");
    String nome = console.nextLine();

    System.out.print("Telefone: ");
    String tel = console.nextLine();

    System.out.print("Nome rua: ");
    String nomeRua = console.nextLine();

    System.out.print("Número da casa: ");
    long numCasa = console.nextInt();
    console.nextLine();

    // fecha o bagui
    console.close();

    // exibe na tela em 2 linhas
    System.out.println("\n-Seus dados:");
    System.out.printf("\nNome: %s", nome);
    System.out.printf("\nTelefone: %s", tel);
    System.out.printf("\nRua: %s, %d\n", nomeRua, numCasa);
  }
}