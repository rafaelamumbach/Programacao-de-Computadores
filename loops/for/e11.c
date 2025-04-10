#include <stdio.h>

int main(){
    int i, n, soma=0;

    for (i = 0; i < 15; i++){
        printf("Informe um nro (%d/15): ", i + 1);
        scanf("%d", &n);

        soma += n;
    }

    printf("Soma dos nros digitados: %d", soma);
}