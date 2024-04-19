public class Televisao {

  private int VolumeTV, CanalTV;

  public Televisao(int _VolumeTV, int _CanalTV) {
    SetVolumeTV(_VolumeTV);
    SetCanalTV(_CanalTV);
  }

  public void SetVolumeTV(int NovoVolume) {
    if (NovoVolume >= 1 && NovoVolume <= 100) {
      VolumeTV = NovoVolume;
    }
  }

  public void SetCanalTV(int NovoCanal) {
    if (NovoCanal >= 1 && NovoCanal <= 50) {
      CanalTV = NovoCanal;
    }
  }

  public int GetVolumeTV() {
    return this.VolumeTV;
  }

  public int GetCanalTV() {
    return this.CanalTV;
  }
}