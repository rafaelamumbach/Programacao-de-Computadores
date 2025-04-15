#include <stdio.h>

int main(){
    int i;
    float peso, altura, imc;
    float maior_peso, maior_altura, maior_imc;

    printf("Pessoa 1/10\nPeso e altura: ");
    scanf("%f%f", &peso, &altura);

    maior_peso = peso;
    maior_altura = altura;
    maior_imc = peso / (altura * altura);

    for(i = 2; i <= 10; i++){
        printf("Pessoa %d/10\nPeso e altura: ", i);
        scanf("%f%f", &peso, &altura);

        imc = peso / (altura * altura);

        if(imc > maior_imc){
            maior_imc = imc;
            maior_peso = peso;
            maior_altura = altura;
        }
    }

    printf("A pessoa de maior IMC (%.2f) mede %.2fm e pesa %.1fkg.\n", maior_imc, maior_altura, maior_peso);

}