public class ControleRemoto {

  public void DiminuirVolume1() {
    this.SetVolumeTV(this.GetVolumeTV() - 1);
  }

  public void AumentarVolume1() {
    this.SetVolumeTV(this.GetVolumeTV() + 1);
  }

  public void AumentarCanal1() {
    this.SetCanalTV(this.GetCanalTV() + 1);
  }

  public void DiminuirCanal1() {
    this.SetCanalTV(this.GetCanalTV() - 1);
  }

  public void TrocarCanal(int NovoCanal) {
    this.SetCanalTV(NovoCanal);
  }

  public int ConsultarVolume() {
    return this.GetVolumeTV();
  }

  public int ConsultarCanal() {
    return this.GetCanalTV();
  }
}