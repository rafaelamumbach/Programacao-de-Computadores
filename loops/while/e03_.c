#include <stdio.h>

int main() {
    int num, i;
    int menor, qtd;

    printf("Nro 1/20: ");
    scanf("%d", &num);
    
    menor = num;
    qtd = 1;
    i = 1;

    while(i < 20) {
        printf("Nro %d/20: ", i + 1);
        scanf("%d", &num);

        if(num < menor) {
            menor = num;
            qtd = 1;
        } else if(num == menor) {
            qtd++;
        }

        i++;
    }

    printf("Menor: %d\nFoi inserido %d vezes.\n", menor, qtd);
}