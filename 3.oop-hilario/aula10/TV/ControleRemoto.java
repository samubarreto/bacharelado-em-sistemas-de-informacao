public class ControleRemoto {

  private Televisao tv;

  public ControleRemoto(Televisao tv) {
    this.tv = tv;
  }

  public void DiminuirVolume1() {
    tv.SetVolumeTV(tv.GetVolumeTV() - 1);
  }

  public void AumentarVolume1() {
    tv.SetVolumeTV(tv.GetVolumeTV() + 1);
  }

  public void AumentarCanal1() {
    tv.SetCanalTV(tv.GetCanalTV() + 1);
  }

  public void DiminuirCanal1() {
    tv.SetCanalTV(tv.GetCanalTV() - 1);
  }

  public void TrocarCanal(int NovoCanal) {
    tv.SetCanalTV(NovoCanal);
  }

  public int ConsultarVolume() {
    return tv.GetVolumeTV();
  }

  public int ConsultarCanal() {
    return tv.GetCanalTV();
  }
}