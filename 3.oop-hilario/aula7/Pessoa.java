import javax.swing.JOptionPane;

public class Pessoa {
  private String nome;
  private int idade;
  private String telefone;

  public Pessoa(String n, int i, String f) {
    nome = n;
    idade = i;
    telefone = f;
  }

  public void novo_fone(String f) {
    telefone = f;
  }

  public void novo_fone() {
    telefone = JOptionPane.showInputDialog("Novo Fone");
  }

  public String nro_bacana() {
    return telefone;
  }

  public String nome_bacana() {
    return nome;
  }

  public int idade_bacana() {
    return idade;
  }
}
