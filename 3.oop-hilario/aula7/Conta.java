public class Conta {
  private String nro;
  private double saldo;

  // método construtor
  public Conta(String nro, double saldo) {
    this.nro = nro;
    this.saldo = saldo;
  }

  public void depositar(double valor) {
    this.saldo += valor;
  }

  public void sacar(double valor) {
    this.saldo -= valor;
  }

  public double getSaldo() {
    return this.saldo;
  }

  public String getNro() {
    return this.nro;
  }
}