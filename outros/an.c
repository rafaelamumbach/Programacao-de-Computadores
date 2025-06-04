#include <stdio.h>

int main() {
    int chefe, i, codigo_vencedor = 0;
    float nota, soma, media, maior, menor;
    float maior_media = 0, maior_f = 0, menor_f = 0;

    printf("Codigo: ");
    scanf("%d", &chefe);

    while (chefe != 0) {
        soma = 0;
        maior = 0;
        menor = 11;

        for (i = 0; i < 7; i++) {
            printf("Nota %d/7: ", i + 1);
            scanf("%f", &nota);

            if (nota >= 1 && nota <= 10) {
                soma += nota;

                if (nota > maior)
                    maior = nota;

                if (nota < menor)
                    menor = nota;
            } else {
                printf("Nota fora do intervalo. Insira uma nota entre 1 e 10.\n");
                i--;
            }
        }

        soma -= maior;
        soma -= menor;
        media = soma / 5;

        if (media > maior_media) {
            maior_media = media;
            codigo_vencedor = chefe;
            maior_f = maior;
            menor_f = menor;
        }

        printf("Codigo: ");
        scanf("%d", &chefe);
    }

    if (codigo_vencedor != 0) {
        printf("\nChefe vencedor: %d\n", codigo_vencedor);
        printf("Pontuacao: %.1f\n", maior_media);
        printf("Maior e menor nota desconsideradas: %.1f e %.1f\n", maior_f, menor_f);
    } else {
        printf("Nenhum chefe avaliado.\n");
    }

}