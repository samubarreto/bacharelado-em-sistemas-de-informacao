public class Pessoa {
  // get -> acessar conteúdo de atributo privado, tem return;
  // set -> define conteúdo de atributo privado;
  private String nome;
  private String dataNascimento;
  private double altura;

  public String getNome() { // retorna o conteúdo
    return nome;
  }

  public void setNome(String nome) { // altera o conteúdo
    this.nome = nome;
  }

  public String getDataNascimento() { // retorna o conteúdo
    return dataNascimento;
  }

  public void setDataNascimento(String dataNascimento) { // altera o conteúdo
    this.dataNascimento = dataNascimento;
  }

  public double getAltura() { // retorna o conteúdo
    return altura;
  }

  public void setAltura(double altura) { // altera o conteúdo
    this.altura = altura;
  }

  public void GetAll() {
    System.out.println(this.nome);
    System.out.println(this.dataNascimento);
    System.out.println(this.altura);
  }

  public static void main(String[] args) {
    Pessoa samu = new Pessoa();
    samu.setNome("Samuel");
    samu.setDataNascimento("11/04/2004");
    samu.setAltura(1.75);
    samu.GetAll();
  }
}
