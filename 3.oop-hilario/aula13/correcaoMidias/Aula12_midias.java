public class Aula12_midias {
  public static void main(String args[])
  {
    Midia[] lista = new Midia[10];
    int opcao;
    for (int i = 0; i < 2; i++)
    {
      System.out.printf("\n>Escolha uma opção:\n");
      System.out.printf("\n>[1]CD");
      System.out.printf("\n>[2]DVD\n");
      Scanner in = new Scanner(System.in);
      opcao = in.nextInt();
      if (opcao == 1)
      {
        lista[i] = new CD();
      } else {
        lista[i] = new DVD();
      }
      lista[i].inserirDados();
    }
    for (int i = 0; i < 2; i++)
      {
        lista[i].printDados();
      }
  }
}