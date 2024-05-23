public class Onibus extends Veiculo {
  private int assentos;

  public Onibus(String placa, int ano, int assentos) {
    super(placa, ano);
    setAssentos(assentos);
  }

  public int getAssentos() {
    return assentos;
  }

  public void setAssentos(int assentos) {
    this.assentos = assentos;
  }

  @Override
  public void exibirDados() {
    System.out.printf("Ônibus -> " + placa + ", " + ano + ", " + assentos);
    System.out.println();
  }
}