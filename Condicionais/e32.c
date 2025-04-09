#include <stdio.h>

int main() {
    float valor_total = 0;
    int hora_chegada, hora_saida, horas_totais;

    scanf("%d%d", &hora_chegada, &hora_saida);

    horas_totais = hora_saida - hora_chegada;

    if (horas_totais >= 1) {
        if (horas_totais >= 1){
            valor_total += 5.0;
        }
        
        if (horas_totais >= 2){
            valor_total += 5.0;
        } 

        if (horas_totais >= 3){
            valor_total += 2.0;
        }

        if (horas_totais >= 4){
            valor_total += 2.0;
        }
        
        if (horas_totais >= 5){
            valor_total += (horas_totais - 4) * 1.0;
        } 
    } else {
        printf("Menos de uma hora.");
    }

    printf("Valor total: %.1f\nHoras no estacionamento: %dh\n", valor_total, horas_totais);

}