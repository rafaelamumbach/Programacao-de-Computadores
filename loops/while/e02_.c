#include <stdio.h>

int main() {
    int codigo, votos;

    int m1_cod = 0, m1_vot = -1;
    int m2_cod = 0, m2_vot = -1;

    while (1) {
        printf("Digite o cod (0 p/ encerrar): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }

        printf("Digite o nro de votos: ");
        scanf("%d", &votos);

        if (votos > m1_vot) {
            m2_cod = m1_cod;
            m2_vot = m1_vot;

            m1_cod = codigo;
            m1_vot = votos;

        } else if (votos > m2_vot) {
            m2_cod = codigo;
            m2_vot = votos;
        }
    }

    printf("\n--- Senadores Eleitos ---\n");
    if (m1_vot >= 0) {
        printf("1o - Cod: %d | Votos: %d\n", m1_cod, m1_vot);
    }
    if (m2_vot >= 0) {
        printf("2o - Cod: %d | Votos: %d\n", m2_cod, m2_vot);
    }

}