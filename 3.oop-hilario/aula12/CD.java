public class CD extends Midia {
  public CD(double _preco, String _nome) {
    super(_preco, _nome);
  }

  @Override
  public String getTipo() {
    return "CD";
  }

  @Override
  public Midia inserirDados(double _preco, String _nome) {
    return new CD(_preco, _nome);
  }