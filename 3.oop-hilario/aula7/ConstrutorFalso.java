public class ConstrutorFalso {
  public ConstrutorFalso() {
    System.out.println("Um objeto foi criado.");
  }

  public int ConstrutorFalso() {
    System.out.println("Um objeto não foi criado.");
    return 1;
  }

  public static void main(String[] args) {
    ConstrutorFalso obj = new ConstrutorFalso();
    System.out.println("Método Construtor Falso: " + obj.ConstrutorFalso());
  }
} 