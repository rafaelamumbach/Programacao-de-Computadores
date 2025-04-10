#include <stdio.h>

int main(){
    int i, n, soma=0;

    for (i = 0; i < 15; i++){
        printf("Informe um nro (%d/15): ", i + 1);
        scanf("%d", &n);

        if(n % 2 == 0){
            soma += n;
        }
    }

    printf("Soma dos pares: %d", soma);
}