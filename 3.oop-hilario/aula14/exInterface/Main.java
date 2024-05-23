public class Main {
  public static void main(String[] args) {
    Conta c = new ContaPoupanca();
    GeradorDeExtrato g = new GeradorDeExtrato();
    ContaPoupanca cp = new ContaPoupanca();
    g.geraExtrato(cp);
  }
}
