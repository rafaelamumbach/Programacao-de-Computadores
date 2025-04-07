#include <stdio.h>

int main(){
    int a, b, c, menor, meio, maior, menor2, meio2, maior2, temp;
    scanf("%d%d%d", &a, &b, &c);

    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }

    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }

    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }

    menor = a;
    meio = b;
    maior = c;

    if((menor + meio) <= maior){
        printf("Nao eh um triangulo.\n");
    } else {
        menor2 = menor * menor;
        meio2 = meio * meio;
        maior2 = maior * maior;

        if(maior2 == menor2 + meio2){
            printf("Retangulo.\n");
        } else if(maior2 > menor2 + meio2){
            printf("Obtusangulo.\n");
        } else {
            printf("Acutangulo.\n");
        }

        if((menor == meio) && (meio == maior)){
            printf("Triangulo equilatero.\n");
        } else if((menor == meio) || (menor == maior) || (meio == maior)){
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    }
}