#include <stdio.h>

int main() {
    int hora, minuto, segundo;

    printf("Digite o horario (hora minuto segundo): ");
    scanf("%d%d%d", &hora, &minuto, &segundo);

    
    if (hora >= 0 && hora <= 23) {
        if (minuto >= 0 && minuto <= 59) {
            if (segundo >= 0 && segundo <= 59) {

                segundo = segundo + 1;

                if (segundo == 60) {
                    segundo = 0;
                    minuto = minuto + 1;

                    if (minuto == 60) {
                        minuto = 0;
                        hora = hora + 1;

                        if (hora == 24) {
                            hora = 0;
                        }
                    }
                }

                printf("Horario seguinte: %02d:%02d:%02d\n", hora, minuto, segundo);

            } else {
                printf("Segundos invalidos.\n");
            }
        } else {
            printf("Minutos invalidos.\n");
        }
    } else {
        printf("Hora invalida.\n");
    }

}