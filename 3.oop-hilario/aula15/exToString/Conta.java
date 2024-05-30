package exToString;

public class Conta {
  private int numero;
  private double saldo;

  public String toString() {
    return "Conta nº: " + this.numero + " | Saldo: R$" + this.saldo;
  }

  public boolean equals(Object obj) {
    Conta outra = (Conta) obj;
    return this.numero == outra.numero;
  }

  // @Override
  // public int hashCode() {
  // int hash = 5;
  // return hash;
  // }

  // @Override
  // public boolean equals(Object obj) {
  // if (this == obj) {
  // return true;
  // }
  // if (obj == null) {
  // return false;
  // }
  // if (getClass() != obj.getClass()) {
  // return false;
  // }
  // final Conta other = (Conta) obj;
  // if (this.numero != other.numero) {
  // return false;
  // }
  // if (Double.doubleToLongBits(this.salario) !=
  // double.doubleToLongBits(ohter.salario)) {
  // return false;
  // }
  // }
}