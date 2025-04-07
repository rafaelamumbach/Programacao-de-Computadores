#include <stdio.h>

int main(){
    float p1, p2, p3, temp, rec;
    float media = 0;
    int mat;

    scanf("%f%f%f", &p1, &p2, &p3);
    scanf("%d", &mat);

    media = (1*p1 + 2*p2 + 3*p3) / 6;

    if(media >= 9){
        printf("Conceito 4. Media = %.1f\n", media);
    } else if(media >= 8){
        printf("Conceito 3. Media = %.1f\n", media);
    } else if(media >= 7){
        printf("Conceito 2. Media = %.1f\n", media);
    } else if(media >= 6){
        printf("Conceito 1. Media = %.1f\n", media);
    } else {
        printf("Conceito 0. Media = %.1f\n", media);

        media = (1*10 + 2*p2 + 3*p3) / 6;
        if(media>=6){
            printf("Insira a nota de recuperacao: ");
            scanf("%f", &rec);

            if(p1 > p2){
                temp = p1;
                p1 = p2;
                p2 = temp;
            }

            if(p2 > p3){
                temp = p2;
                p2 = p3;
                p3 = temp;
            }

            if(p1 > p2){
                temp = p1;
                p1 = p2;
                p2 = temp;
            }

            p1 = rec;
            media = (1*p1 + 2*p2 + 3*p3) / 6;

            if(media >= 9){
                printf("Conceito 4. Media c/rec = %.1f\n", media);
            } else if(media >= 8){
                printf("Conceito 3. Media c/rec = %.1f\n", media);
            } else if(media >= 7){
                printf("Conceito 2. Media c/rec = %.1f\n", media);
            } else if(media >= 6){
                printf("Conceito 1. Media c/rec = %.1f\n", media);
            } else {
                printf("Conceito 0. Media c/rec = %.1f\n", media);
            }

        }
    }

}