package exHorario;

public class Horario implements MeuHorario {
  private int hora;
  private int minuto;
  private int segundo;

  public int getHora() {
    return this.hora;
  }

  public int getMinuto() {
    return this.minuto;
  }

  public int getSegundo() {
    return this.segundo;
  }

  public void setHora(int hora) {
    this.hora = hora;
  }

  public void setMinuto(int minuto) {
    this.minuto = minuto;
  }

  public void setSegundo(int segundo) {
    this.segundo = segundo;
  }

  public String toString() {
    return this.hora + ":" + this.minuto + ":" + this.segundo;
  }
}
