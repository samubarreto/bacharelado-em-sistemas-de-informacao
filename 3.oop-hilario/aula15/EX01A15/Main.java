package EX01A15;

public class Main {
  public static void main(String[] args) {
    ControlePonto cp = new ControlePonto();

    Gerente g = new Gerente();
    g.setMatricula(0);
    g.setNome("samu");

    Secretario s = new Secretario();
    s.setMatricula(1);
    s.setNome("renata");

    Telefonista t = new Telefonista();
    t.setMatricula(2);
    t.setNome("ntem");

    cp.registraEntrada(g);
    cp.registraEntrada(s);
    cp.registraEntrada(t);

    cp.registraSaida(t);
    cp.registraSaida(s);
    cp.registraSaida(g);

    g.almocar("macarrão");
    s.almocar("macarrão");
    t.almocar("macarrão");
  }
}