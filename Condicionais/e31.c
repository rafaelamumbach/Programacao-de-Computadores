#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int inicio, fim, duracao, horas, minutos;

    printf("Digite a hora e minuto de inicio do evento: ");
    scanf("%d%d", &h1, &m1);

    printf("Digite a hora e minuto de fim do evento: ");
    scanf("%d%d", &h2, &m2);

    if (h1 >= 0 && h1 <= 23 && m1 >= 0 && m1 <= 59 && h2 >= 0 && h2 <= 23 && m2 >= 0 && m2 <= 59) {

        inicio = h1 * 60 + m1;
        fim = h2 * 60 + m2;

        if (fim <= inicio) {
            fim = fim + 24 * 60;
        }

        duracao = fim - inicio;

        horas = duracao / 60;
        minutos = duracao % 60;

        printf("Duracao do evento: %d hora(s) e %d minuto(s).\n", horas, minutos);

    } else {
        printf("Horario invalido.\n");
    }

}