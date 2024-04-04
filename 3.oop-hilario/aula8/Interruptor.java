public class Interruptor {
  private Lampada conectada;
  private boolean ligado;

  public Interruptor(Lampada conectada) {
    this.conectar(conectada);
  }

  public void conectar(Lampada l) {
    this.conectada = l;
  }

  public void ligar() {
    System.out.println("Ligando interruptor");
    if (!this.ligado) {
      this.ligado = true;
      if (conectada != null) {
        conectada.acender();
      }
    }
  }

  public void desligar() {
    System.out.println("Desligando interuptor");
    if (this.ligado) {
      this.ligado = false;
      if (conectada != null) {
        conectada.apagar();
      }
    }
  }

  @Override
  public String toString() {
    return "Interruptor [conectada = " + conectada + "]";
  }
}
