#include <stdio.h>

int main(){
    float nota, media, maior, menor, soma;
    int num = 1, i;

    while(num != 0){
        printf("Num chefe: ");
        scanf("%d", &num);

        if(num == 0){
            break;
        }

        soma = 0;
        maior = -1;
        menor = 11;
        i = 0;

        for(i=0; i<7; i++){
            printf("Nota %d/7: ", i+1);
            scanf("%f", &nota);

            if (nota >= 1 && nota <= 10){
                soma += nota;

                if (nota > maior){
                    maior = nota;
                }

                if (nota < menor){
                    menor = nota;
                }
            } else {
                printf("Nota fora dpo intervalo!\n");
            }
        }

        soma = soma - maior - menor;
        media = soma / 5;

        printf("\n>> Num chefe: %d\n>> Pontuacao: %.1f\n>> Menor e maior nota: %.1f | p%.1f\n\n", num, media, menor, maior);
    }
}