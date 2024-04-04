public class aula08 {
  public static void main(String[] args) {
    Lampada lampada1 = new Lampada("Incandescente");
    lampada1.setPotencia(40);
    System.out.println(lampada1);
    Interruptor i1 = new Interruptor(lampada1);
    i1.conectar(lampada1);
    System.out.println(i1);
    i1.ligar();
    System.out.println(lampada1);
    i1.desligar();
    System.out.println(lampada1);
  }
}
