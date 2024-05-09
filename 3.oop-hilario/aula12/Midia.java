public class Midia {
  private static int codigo = 1000;
  private double preco;
  private String nome;

  public Midia(double _preco, String _nome) {
    this.codigo = codigo++;
    this.preco = _preco;
    this.nome = _nome;
  }

  public String getTipo() {
    return "Midia";
  }

  public String getDetalhes() {
    return "\n>Detalhes " + getTipo() + ":\n" + "Código: " + this.codigo + "\n" + "Nome: " + this.nome + "\n" + "Preço: " + this.preco + "\n";
  }

  public void printDados() {
    System.out.println(getDetalhes());
  }

  public Midia inserirDados(double _preco, String _nome) {
    return new Midia(_preco, _nome);
  }
}