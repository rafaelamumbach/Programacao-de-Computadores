#include <stdio.h>

int main(){
    int i, n;
    float soma = 0, cont = 0;
    float media = 0;

    for (i = 0; i < 15; i++){
        printf("%d/15: ", i + 1);
        scanf("%d", &n);

        if(n % 2 != 0){
            soma += n;
            cont++;
        }
    }
    media = soma / cont;
    printf("Media dos numeros impares: %.1f", media);
}