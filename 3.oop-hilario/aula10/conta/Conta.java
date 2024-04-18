package conta;

public class Conta {
  private int NumeroConta;
  private double SaldoConta;

  public Conta(int _NumeroConta, double _SaldoConta) {
    SetNumeroConta(_NumeroConta);
    SetSaldoConta(_SaldoConta);
  }

  public int GetNumeroConta() {
    return this.NumeroConta;
  }

  public double GetSaldoConta() {
    return this.SaldoConta;
  }

  public void SetNumeroConta(int NovoNum) {
    this.NumeroConta = NovoNum;
  }

  public void SetSaldoConta(double NovoSaldo) {
    this.SaldoConta = NovoSaldo;
  }

  public void Creditar(double ValorCreditado) {
    this.SaldoConta += ValorCreditado;
    System.out.println(MostrarMovimentação(ValorCreditado, this.SaldoConta));
  }

  public void Debitar(double ValorDebitado) {
    this.SaldoConta -= ValorDebitado;
    System.out.println(MostrarMovimentação((ValorDebitado) * -1, this.SaldoConta));
  }

  public String MostrarMovimentação(double ValorMovimentado, double SaldoPosMovimentacao) {
    return ">Valor Movimentado: " + "R$" + ValorMovimentado
        + "; Novo Saldo: R$" + SaldoPosMovimentacao;
  }

  public String MostrarConta() {
    return "\n>Número Conta: " + this.NumeroConta + "; Saldo: R$" + this.SaldoConta + "\n";
  }

  public static void main(String[] args) {
    Conta conta1 = new Conta(142004, 1650);

    System.out.println(conta1.MostrarConta());
    conta1.Creditar(100);
    conta1.Debitar(250);
    conta1.SetSaldoConta(9999);
    System.out.println(conta1.MostrarConta());
  }
}