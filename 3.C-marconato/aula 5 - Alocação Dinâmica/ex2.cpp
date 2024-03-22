/* ex2
int idades[] = {19, 25, 30, 18, 22};
int tamanho = sizeof(idades) / sizeof(idades[0]);
int maiores = 0;
int menores = 0;
*/
// func que retorne por parametros a quantidade de idades maiores ou iguais a 21 e a quantidade de idades menores que 21.

void idades21(int *idades, int tamanho, int *maiores, int *menores) {
    *maiores = 0;
    *menores = 0;

    for (int i = 0; i < tamanho; i++) {
        if (idades[i] >= 21) {
            (*maiores)++;
        } else {
            (*menores)++;
        }
    }
}
