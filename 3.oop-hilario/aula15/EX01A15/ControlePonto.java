package EX01A15;

import java.util.Date;
import java.text.SimpleDateFormat;

public class ControlePonto {
  public void registraEntrada(Funcionario f) {
    SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
    Date agora = new Date();
    System.out.println("ENTRADA: " + f.getMatricula() + " - " + f.getNome());
    System.out.println("DATA: " + sdf.format(agora));
  }

  public void registraSaida(Funcionario f) {
    SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
    Date agora = new Date();
    System.out.println("SAÍDA: " + f.getMatricula() + " - " + f.getNome());
    System.out.println("DATA: " + sdf.format(agora));
  }
}
