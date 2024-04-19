public class Main {
  public static void main(String[] args) {
    Televisao minhaTV = new Televisao(50, 1);
    ControleRemoto meuControle = new ControleRemoto(minhaTV);

    meuControle.ConsultarVolume();
    meuControle.ConsultarCanal();
  }
}