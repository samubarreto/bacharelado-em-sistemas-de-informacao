package exHorario;

public class Main {
  public static void main(String[] args) {
    Horario h = new Horario();
    h.setHora(22);
    h.setMinuto(13);
    h.setSegundo(55);
    System.out.println(h.toString());
  }
}