public class Funcionario {
  class funcionario {
    String nome;
    double salario;

    // retorno nome parâmetros
    void aumento(double valor) {
      this.salario += valor;
    };
  };

  public static void main(String[] args) {
    // Criando uma instância de funcionário (instância = objeto)
    Funcionario.funcionario funcionarioSamuel = new Funcionario().new funcionario();

    // Definindo os atributos do funcionário
    funcionarioSamuel.nome = "Samuel";
    funcionarioSamuel.salario = 1520.0;

    // Chamando o método aumento para aplicar um aumento de salário
    funcionarioSamuel.aumento(1500.0);

    // Imprimindo os atributos atualizados do funcionário
    System.out.println("Nome do funcionário: " + funcionarioSamuel.nome);
    System.out.println("Salário do funcionário: " + funcionarioSamuel.salario);
  };
};