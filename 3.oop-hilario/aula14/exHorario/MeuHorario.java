package exHorario;

interface MeuHorario {
  int getHora();

  int getMinuto();

  int getSegundo();

  void setHora(int hora);

  void setMinuto(int minuto);

  void setSegundo(int segundo);

  String toString();
}