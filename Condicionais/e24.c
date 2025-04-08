#include <stdio.h>

int main() {
    int dia, mes, ano;
    int dias_no_mes;

    scanf("%d%d%d", &dia, &mes, &ano); //31 12 2024

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

    dia++; //dia = 32
    if (dia > dias_no_mes) { //sim
        dia = 1; //1
        mes++; //13
        if (mes > 12) { //sim
            mes = 1; //1
            ano++; //2025
        }
    } 
    printf("Data seguinte: %d/%d/%d\n", dia, mes, ano);

}