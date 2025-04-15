#include <stdio.h>

int main(){
    int i, n, menor, maior;

    printf("Nro 1/10: ");
    scanf("%d", &n);
    menor = n;
    maior = n;

    for(i = 2; i <= 10; i++){
        printf("Nro %d/10: ", i);
        scanf("%d", &n);

        if(n < menor){
            menor = n;
        }

        if(n > maior){
            maior = n;
        }
    }

    printf("Menor: %d\nMaior: %d", menor, maior);

}