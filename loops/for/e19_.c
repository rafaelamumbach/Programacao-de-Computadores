#include <stdio.h>

int main(){
    int i;
    float peso, altura, maior_peso, maior_altura;

    printf("Pessoa 1/10\nPeso e altura: ");
    scanf("%f%f", &peso, &altura);

    maior_peso = peso;
    maior_altura = altura;

    for(i = 2; i <= 10; i++){
        printf("Pessoa %d/10\nPeso e altura: ",i);
        scanf("%f%f", &peso, &altura);

        if(peso > maior_peso){
            maior_peso = peso;
        }

        if(altura > maior_altura){
            maior_altura = altura;
        }
    }

    printf("A pessoa mais alta mede %.1fm e pesa %.0fkg.", maior_altura, maior_peso);

}