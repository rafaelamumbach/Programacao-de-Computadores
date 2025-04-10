#include <stdio.h>

int main(){
    int multiplicando, multiplicador, i, multiplicacao;
    scanf("%d%d", &multiplicando, &multiplicador);

    for (i = 0; i < multiplicador; i++){
        multiplicacao += multiplicando;
    }

    printf("%d x %d eh: %d :)", multiplicando, multiplicador, multiplicacao);
}