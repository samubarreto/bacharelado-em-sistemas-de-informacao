package exHorario;

public class Horario implements MeuHorario {
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
  public String toString(int hora, int minuto, int segundo) {
    return hora + ":" + minuto + ":" + segundo;
  }
}