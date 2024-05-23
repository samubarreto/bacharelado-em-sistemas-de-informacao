import java.util.ArrayList;

public class Main {
  public static void main(String args[]) {
    ArrayList<Veiculo> veiculos = new ArrayList<Veiculo>();
    veiculos.add(new Veiculo("XPO-0987", 2010));
    veiculos.add(new Veiculo("XML-6756", 2077));
    veiculos.add(new Caminhao("APZ-0654", 2080, 9));
    veiculos.add(new Caminhao("XPZ-1234", 2004, 20));
    veiculos.add(new Veiculo("WEO-0347", 2000));
    veiculos.add(new Caminhao("FUC-1234", 2004, 20));
    veiculos.add(new Veiculo("XYZ-1237", 2001));

    for (Veiculo veiculo : veiculos) {
      veiculo.exibirDados();
    }

    // ArrayList<Caminhao> caminhoes = new ArrayList<Caminhao>();

    // for (Caminhao caminhao : caminhoes) {
    // caminhao.exibirDados();
    // }

  }
}