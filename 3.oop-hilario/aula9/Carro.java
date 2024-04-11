public class Carro {

  String nome, marca;
  int ano;
  double velocidade;

  public void Acelerar(double moreSpeed) {
    System.out.println(this.nome + " estava à " + velocidade + "km/h");
    velocidade += moreSpeed;
    System.out.println(this.nome + " acelerou + " + moreSpeed + "km/h");
    System.out.println(this.nome + " está à " + velocidade + "km/h\n");
  };

  public void Frear(double moreSpeed) {
    System.out.println(this.nome + " estava à " + velocidade + "km/h");
    velocidade -= moreSpeed;
    System.out.println(this.nome + " desacelerou " + moreSpeed + "km/h");
    System.out.println(this.nome + " está à " + velocidade + "km/h\n");
  };

  public void Buzinar() {
    System.out.println(this.nome + ": bip bip\n");
  };

  public void Status() {
    System.out.println("-Marca: " + this.marca);
    System.out.println("-Nome: " + this.nome);
    System.out.println("-Ano: " + this.ano);
    System.out.println("-Velocidade atual: " + this.velocidade + "km/h\n");
  }

  public static void main(String[] args) {
    Carro carroTeste = new Carro();
    carroTeste.nome = "Corsa";
    carroTeste.marca = "Chevrolet";
    carroTeste.ano = 1994;
    carroTeste.velocidade = 120.10;

    carroTeste.Acelerar(100.10);
    carroTeste.Frear(24.23);
    carroTeste.Buzinar();

    carroTeste.Status();
  }
}
