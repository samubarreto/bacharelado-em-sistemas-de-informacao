import java.util.Scanner;

public class RA638217_av_02 {
  private String Nome, DataNascimento;
  private double Altura;

  public String GetNome() {
    return this.Nome;
  };

  public void SetNome(Scanner input) {
    this.Nome = input.nextLine();
  }

  public String GetDataNascimento() {
    return this.DataNascimento;
  };

  public void SetDataNascimento(Scanner input) {
    this.DataNascimento = input.nextLine();
  }

  public double GetAltura() {
    return this.Altura;
  };

  public void SetAltura(Scanner input) {
    this.Altura = input.nextDouble();
  }

  public void GetTodos() {
    System.out.printf("Nome: %s, Data de Nascimento: %s, Altura: %.2f%n", GetNome(), GetDataNascimento(), GetAltura());
  }

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    RA638217_av_02 instanciaExemplo = new RA638217_av_02();

    System.out.printf("Defina nome: ");
    instanciaExemplo.SetNome(input);

    System.out.printf("Defina data de nascimento: ");
    instanciaExemplo.SetDataNascimento(input);

    System.out.printf("Defina Altura: ");
    instanciaExemplo.SetAltura(input);

    input.close();

    instanciaExemplo.GetTodos();
  }
}