public class Main {
  public static void main (String[] args) {
    System.out.println("teste");
  }
}

class Animal {
  void andar() {
    condicao("Animal andando");
  }
}

class Mamifero extends Animal {
  void andar() {
    condicao("Mamifero andando");
  }
}

class Homem extends Mamifero {
  void andar() {
    condicao("Homem andando");
  }
}

class Servico {
  public double calculaTaxa() {
    return 5;
  }
}

class Emprestimo extends Servico {
  public double calculaTaxa() {
    return super.calculaTaxa() + this.valor * 0.1;
  }
}