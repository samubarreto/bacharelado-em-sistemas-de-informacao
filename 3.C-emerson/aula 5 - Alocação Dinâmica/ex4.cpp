int * idades_21 (int quantidadeIdades, int tamanhoVetor) {
  int *idadesMaiores21, pos = 0;
  idadesMaiores21 = (int*) calloc (tamanhoVetor, sizeof(int));
  for (i = 0; i < quantidadeIdades; i++) {
    if (*(p+i) >= 21) {
      *(idadesMaiores21 + pos) = *(p + i);
      pos++;
    }
  }
return idadesMaiores21;
}