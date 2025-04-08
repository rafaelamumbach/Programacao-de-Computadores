#include <stdio.h>

int main() {
    float c1, v1;
    float c2, v2;
    float c3, v3;
    float c4, v4;
    float c5, v5;
    float porc1, porc2, porc3, porc4, porc5;
    float qtd_votos = 0;
    float temp_v;

    printf("Informe codigo e votacao (c1): ");
    scanf("%f%f", &c1, &v1);

    printf("Informe codigo e votacao (c2): ");
    scanf("%f%f", &c2, &v2);

    printf("Informe codigo e votacao (c3): ");
    scanf("%f%f", &c3, &v3);

    printf("Informe codigo e votacao (c4): ");
    scanf("%f%f", &c4, &v4);

    printf("Informe codigo e votacao (c5): ");
    scanf("%f%f", &c5, &v5);

    qtd_votos = v1 + v2 + v3 + v4 + v5;

    porc1 = ((v1 * 100.0) / qtd_votos);
    porc2 = ((v2 * 100.0) / qtd_votos);
    porc3 = ((v3 * 100.0) / qtd_votos);
    porc4 = ((v4 * 100.0) / qtd_votos);
    porc5 = ((v5 * 100.0) / qtd_votos);

    printf("\n");
    printf("Codigo: %.1f\nNumero de votos: %.1f\nPercentual de votos: %.2f%%\n\n", c1, v1, porc1);
    printf("Codigo: %.1f\nNumero de votos: %.1f\nPercentual de votos: %.2f%%\n\n", c2, v2, porc2);
    printf("Codigo: %.1f\nNumero de votos: %.1f\nPercentual de votos: %.2f%%\n\n", c3, v3, porc3);
    printf("Codigo: %.1f\nNumero de votos: %.1f\nPercentual de votos: %.2f%%\n\n", c4, v4, porc4);
    printf("Codigo: %.1f\nNumero de votos: %.1f\nPercentual de votos: %.2f%%\n\n", c5, v5, porc5);

    if (porc1 > 51.0) {
        printf("Ganhador da eleicao em 1o turno: %.1f\n", c1);
    } else if (porc2 > 51.0) {
        printf("Ganhador da eleicao em 1o turno: %.1f\n", c2);
    } else if (porc3 > 51.0) {
        printf("Ganhador da eleicao em 1o turno: %.1f\n", c3);
    } else if (porc4 > 51.0) {
        printf("Ganhador da eleicao em 1o turno: %.1f\n", c4);
    } else if (porc5 > 51.0) {
        printf("Ganhador da eleicao em 1o turno: %.1f\n", c5);
    } else {
        printf("Eleicao vai para o 2o turno.\n");

        float orig_v1 = v1, orig_v2 = v2, orig_v3 = v3, orig_v4 = v4, orig_v5 = v5;
        float orig_c1 = c1, orig_c2 = c2, orig_c3 = c3, orig_c4 = c4, orig_c5 = c5;
        float orig_p1 = porc1, orig_p2 = porc2, orig_p3 = porc3, orig_p4 = porc4, orig_p5 = porc5;

        if (v1 > v2){
            temp_v = v1;
            v1 = v2;
            v2 = temp_v;
        }

        if (v2 > v3){
            temp_v = v2;
            v2 = v3;
            v3 = temp_v;
        }

        if (v3 > v4){
            temp_v = v3;
            v3 = v4;
            v4 = temp_v;
        }

        if (v4 > v5){
            temp_v = v4;
            v4 = v5;
            v5 = temp_v;
        }

        if (v1 > v2){
            temp_v = v1;
            v1 = v2;
            v2 = temp_v;
        }

        if (v2 > v3){
            temp_v = v2;
            v2 = v3;
            v3 = temp_v;
        }

        if (v3 > v4){
            temp_v = v3;
            v3 = v4;
            v4 = temp_v;
        }

        if (v1 > v2){
            temp_v = v1;
            v1 = v2;
            v2 = temp_v;
        }

        float cod1 = 0, cod2 = 0;
        float perc1 = 0, perc2 = 0;

        if (v5 == orig_v1){
            cod1 = orig_c1;
            perc1 = orig_p1;
        } else if (v5 == orig_v2){
            cod1 = orig_c2;
            perc1 = orig_p2;
        } else if (v5 == orig_v3){
            cod1 = orig_c3;
            perc1 = orig_p3;
        } else if (v5 == orig_v4){
            cod1 = orig_c4;
            perc1 = orig_p4;
        } else if (v5 == orig_v5){
            cod1 = orig_c5;
            perc1 = orig_p5;
        }

        if (v4 == orig_v1){
            cod2 = orig_c1;
            perc2 = orig_p1;
        } else if (v4 == orig_v2){
            cod2 = orig_c2;
            perc2 = orig_p2;
        } else if (v4 == orig_v3){
            cod2 = orig_c3;
            perc2 = orig_p3; }
        else if (v4 == orig_v4){
            cod2 = orig_c4;
            perc2 = orig_p4;
        } else if (v4 == orig_v5){
            cod2 = orig_c5;
            perc2 = orig_p5;
        }

        printf("Quem disputara:\n");
        printf("1o lugar: Codigo: %.1f | Votos: %.1f | Percentual: %.2f%%\n", cod1, v5, perc1);
        printf("2o lugar: Codigo: %.1f | Votos: %.1f | Percentual: %.2f%%\n", cod2, v4, perc2);

        /* Caso voce tenha lido o codigo ate aqui: sei que esta nao eh a maneira mais otimizada,
        nem a mais simples de desenvolver essa logica. No entanto, meu foco eh desenvolver a minha
        logica, antes de pensar em otimizacao. Acredito que seguindo esta ordem, conseguirei me
        desenvolver melhor. Aceito sugestoes. ;) */
        
    }
}