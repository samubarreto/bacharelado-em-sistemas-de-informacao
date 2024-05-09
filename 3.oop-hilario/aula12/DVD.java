public class DVD extends Midia {
  public DVD(double _preco, String _nome) {
    super(_preco, _nome);
  }

  @Override
  public String getTipo() {
    return "DVD";
  }

  @Override
  public Midia inserirDados(double _preco, String _nome) {
    return new DVD(_preco, _nome);
  }
}