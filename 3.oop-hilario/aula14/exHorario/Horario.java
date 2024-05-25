package exHorario;

public class Horario implements MeuHorario {
  private int hora;
  private int minuto;
  private int segundo;

  @Override
  public int getHora() {
    return this.hora;
  }

  @Override
  public int getMinuto() {
    return this.minuto;
  }

  @Override
  public int getSegundo() {
    return this.segundo;
  }

  @Override
  public void setHora(int hora) {
    this.hora = hora;
  }

  @Override
  public void setMinuto(int minuto) {
    this.minuto = minuto;
  }

  @Override
  public void setSegundo(int segundo) {
    this.segundo = segundo;
  }

  @Override
  public String toString() {
    return this.hora + ":" + this.minuto + ":" + this.segundo;
  }
}
