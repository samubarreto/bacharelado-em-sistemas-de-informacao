import javax.swing.JOptionPane;

public class CaixasDeDialogo {
  public static void main(String[] args) {
    String nome;
    int resposta;
    nome = JOptionPane.showInputDialog("Qual seu nome?");
    resposta = JOptionPane.showConfirmDialog(null, "Seu nome é " + nome + "?"); // 0 sim, 1 não, 2 cancel
    if (resposta == JOptionPane.YES_OPTION) {
      JOptionPane.showMessageDialog(null, "Nome correto");
    } else {
      JOptionPane.showMessageDialog(null, "Nome incorreto");
    }
  }
}