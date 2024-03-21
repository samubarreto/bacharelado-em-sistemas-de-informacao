public class Conta {
  public String nro;
  double saldo;

  // Método construtor para Conta
  public Conta(String nro, double saldo) {
    this.nro = nro;
    this.saldo = saldo;
  }

  public void atualizaSaldo(double novoSaldo) {
    this.saldo = novoSaldo;
  }
}