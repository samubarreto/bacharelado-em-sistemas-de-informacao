public class Filme {
  private int codigoFilme, lancamentoFilme;
  private String nomeFilme, categoriaFilme;
  private String[] atoresFilme;

  public Filme() {
    this.nomeFilme = "Nome Inicializado";
    this.categoriaFilme = "Categoria Inicializada";
    this.atoresFilme = new String[10];
  }

  public int getCodigoFilme() {
    return this.codigoFilme;
  }

  public int getLancamentoFilme() {
    return this.lancamentoFilme;
  }

  public String getNomeFilme() {
    return this.nomeFilme;
  }

  public String getCategoriaFilme() {
    return this.categoriaFilme;
  }

  public String[] getAtoresFilme() {
    return this.atoresFilme;
  }

  public void setCodigoFilme(int codigoFilme) {
    this.codigoFilme = codigoFilme;
  }

  public void setLancamentoFilme(int lancamentoFilme) {
    this.lancamentoFilme = lancamentoFilme;
  }

  public void setNomeFilme(String nomeFilme) {
    this.nomeFilme = nomeFilme;
  }

  public void setCategoriaFilme(String categoriaFilme) {
    this.categoriaFilme = categoriaFilme;
  }

  public void setAtoresFilme(String[] nomesAtores) {
    for (int i = 0; i < nomesAtores.length; i++) {
      this.atoresFilme[i] = nomesAtores[i];
    }
  }

  public static void main(String[] args) {
    Filme filme1 = new Filme();
    filme1.setCodigoFilme(123456);
    filme1.setLancamentoFilme(1999);
    filme1.setNomeFilme("À Espera de um Milagre");
    filme1.setCategoriaFilme("Drama");
    String[] nomesAtores = {
      "Tom Hanks", "Michael Clarke Duncan", "David Morse", "Bonnie Hunt", "James Cromwell", "Michael Jeter", "Graham Greene", "Doug Hutchison", "Sam Rockwell", "Barry Pepper"
    };
    filme1.setAtoresFilme(nomesAtores);

    System.out.println("Nome do Filme: " + filme1.getNomeFilme());
    System.out.println("Código do Filme: " + filme1.getCodigoFilme());
    System.out.println("Ano de Lançamento: " + filme1.getLancamentoFilme());
    System.out.println("Categoria do Filme: " + filme1.getCategoriaFilme());
    System.out.println("Atores do Filme:");
    String[] atoresDoFilme = filme1.getAtoresFilme();
    for (String ator : atoresDoFilme) {
        System.out.println("- " + ator);
    }
  }
}
