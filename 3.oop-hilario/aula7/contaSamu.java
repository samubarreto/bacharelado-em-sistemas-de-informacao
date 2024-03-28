public class contaSamu {
  public static void main(String[] args) {
    System.out.println("Programa executado com sucesso!");
    Conta conta1 = new Conta("11042004", 350);
    conta1.depositar(500);
    conta1.getClass();
  }
}