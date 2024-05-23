public class Caminhao extends Veiculo {
  private int eixos;

  public Caminhao(String placa, int ano, int eixos) {
    super(placa, ano);
    setEixos(eixos);
  }

  public int getEixos() {
    return eixos;
  }

  public void setEixos(int eixos) {
    this.eixos = eixos;
  }

  @Override
  public void exibirDados() {
    System.out.printf("Caminhão -> " + placa + ", " + ano + ", " + eixos);
    System.out.println();
  }
}