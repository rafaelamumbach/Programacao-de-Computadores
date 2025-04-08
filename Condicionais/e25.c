#include <stdio.h>

int main() {
    int dia, mes, ano;
    int dias_no_mes;

    scanf("%d%d%d", &dia, &mes, &ano); 

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        dias_no_mes = 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias_no_mes = 30;
    } else {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            dias_no_mes = 29;
        } else {
            dias_no_mes = 28;
        }
    }

    if (mes < 1 || mes > 12) {
        if (dia >= 1 && dia <= dias_no_mes) {
            printf("Data valida.");
        } else {
            printf("Data invalida.");
        }
    } else {
        printf("Data invalida.");
    }

}