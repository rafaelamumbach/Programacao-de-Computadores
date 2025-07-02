#include <stdio.h>

int main() {
    int horas[5], minutos[5];
    int i = 0, aux;

    while (i < 5) {
        printf("Informe horas (0-23) e minutos (0-59): ");
        scanf("%d %d", &horas[i], &minutos[i]);

        if (horas[i] >= 0 && horas[i] <= 23 && minutos[i] >= 0 && minutos[i] <= 59) {
            i++;
        }
    }

    // i=0; horario valido? sim; i=1;
    // i=1; horario valido? nao; i=1;
    // i=1; horario valido? sim; i=2;
    // i=2; horario valido? sim; i=3;
    // i=3; horario valido? sim; i=4;
    // i=4; horario valido? sim; i=5;
    // i = falso.

    for (i = 0; i < 5-1; i++) {
        for (int j = 0; j < 5-1; j++){
            if ((horas[j] > horas[j+1]) || (horas[j] == horas[j+1]&& minutos[j]>minutos[j+1])){
                aux = horas[j];
                horas[j] = horas[j+1];
                horas[j+1] = aux;

                aux = minutos[j];
                minutos[j] = minutos[j+1];
                minutos[j+1] = aux;
            }
        }
    }

    //se horas atuais sao maiores que a proxima hora ou horas atuais sao iguais a proxima hora e os minutos atuais sao maiores que os proximos minutos.
    //exemplo: 12h40 12h39
    //exemplo: 12h00 11h00

    printf("\nHorarios em ordem cronologica:\n");
    for (i = 0; i<5; i++) {
        printf("%02d:%02d\n", horas[i], minutos[i]);
    }
}