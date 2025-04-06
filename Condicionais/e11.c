#include <stdio.h>

void main(){
    int n1, n2, resto, resto2;
    int a1, a2, a3;
    int b1, b2, b3;
    printf("Informe dois numeros com tres digitos cada: ");
    scanf("%d%d", &n1, &n2);

    // numero 1 ------------------//
    a1 = n1 / 100; //469 --> 4
    resto = n1 % 100; //469 --> 69
    a2 = resto / 10; //69 --> 6
    a3 = resto % 10; //69 --> 9

    // numero 2 ------------------//
    b1 = n2 / 100; //469 --> 4
    resto2 = n2 % 100; //469 --> 69
    b2 = resto2 / 10; //69 --> 6
    b3 = resto2 % 10; //69 --> 9

    //teste
    printf("%d %d %d\n", a1,a2,a3);
    printf("%d %d %d\n", b1,b2,b3);

    if(a1 == b1){
        b1 = -1;
    } else if (a1 == b2){
        b2 == -1;
    } else if (a1 == b3){
        b3 == -1;
    }

    if(a2 == b1){
        b1 = -1;
    } else if (a2 == b2){
        b2 == -1;
    } else if (a2 == b3){
        b3 == -1;
    }

    if(a3 == b1){
        b1 = -1;
    } else if (a3 == b2){
        b2 == -1;
    } else if (a3 == b3){
        b3 == -1;
    }

    if((b1+b2+b3 == -3)){ 
        printf("Iguais.");
    } else {
        printf("Nao iguais.");
    }
}