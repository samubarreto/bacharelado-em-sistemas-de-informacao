class Midia {
  private static int proximoCodigo = 1000;
  private int codigo;
  private double preco;
  private String nome;

  public Midia(double _preco, String _nome) {
    this.codigo = proximoCodigo++;
    this.preco = _preco;
    this.nome = _nome;
  }

  public String getTipo() {
    return "Midia";
  }

  public String getDetalhes() {
    return "\n>Detalhes " + getTipo() + ":\n" + "Código: " + this.codigo + "\n" + "Nome: " + this.nome + "\n" + "Preço: " + this.preco + "\n";
  }

  public void printDados() {
    System.out.println(getDetalhes());
  }

  public Midia inserirDados(double _preco, String _nome) {
    return new Midia(_preco, _nome);
  }
}

class DVD extends Midia {
  public DVD(double _preco, String _nome) {
    super(_preco, _nome);
  }

  @Override
  public String getTipo() {
    return "DVD";
  }

  @Override
  public Midia inserirDados(double _preco, String _nome) {
    return new DVD(_preco, _nome);
  }
}

class CD extends Midia {
  public CD(double _preco, String _nome) {
    super(_preco, _nome);
  }

  @Override
  public String getTipo() {
    return "CD";
  }

  @Override
  public Midia inserirDados(double _preco, String _nome) {
    return new CD(_preco, _nome);
  }
}

public class Main {
  public static void main(String[] args) {
    Midia m1 = new Midia(150, "Mídia 1");
    DVD dvd1 = new DVD(200, "DVD 1");
    CD cd1 = new CD(250, "CD 1");

    System.out.println(m1.getDetalhes());
    System.out.println(dvd1.getDetalhes());
    System.out.println(cd1.getDetalhes());

    Midia novaMidia = m1.inserirDados(180, "Nova Mídia 1");
    DVD novoDVD = (DVD) dvd1.inserirDados(220, "Novo DVD 1");
    CD novoCD = (CD) cd1.inserirDados(270, "Novo CD 1");

    System.out.println("-----------------");
    
    System.out.println(m1.getDetalhes());
    System.out.println(dvd1.getDetalhes());
    System.out.println(cd1.getDetalhes());

    System.out.println(novaMidia.getDetalhes());
    System.out.println(novoDVD.getDetalhes());
    System.out.println(novoCD.getDetalhes());
  }
}
