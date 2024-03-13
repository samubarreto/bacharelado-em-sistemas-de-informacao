void quantidadesMaiorIgualMedia(int tamanhoLista, int *listaIdades, int *quantidadeMaiores) {
    int soma = 0;
    for (int i = 0; i < tamanhoLista; i++) {
        soma += listaIdades[i];
    }
    int media = soma / tamanhoLista;
    *quantidadeMaiores = 0;

    for (int i = 0; i < tamanhoLista; i++) {
        if (listaIdades[i] >= media) {
            *quantidadeMaiores++;
        }
    }
}
