#include <stdio.h>

int main(){
    int num, a1, a2, a3, a4, a5, a6, a7, a8, resto;
    scanf("%d", &num); //12344321

    a1 = num / 10000000; //1
    resto = num % 10000000; //2344321

    a2 = resto / 1000000; //2
    resto = resto % 1000000; //344321

    a3 = resto / 100000; //2
    resto = resto % 100000; //44321

    a4 = resto / 10000; //4
    resto = resto % 10000; //4321

    a5 = resto / 1000; //4
    resto = resto % 1000; //321

    a6 = resto / 100; //3
    resto = resto % 100; //21

    a7 = resto / 10; //2
    a8 = resto % 10; //1

    if((a1 == a8) && (a2 == a7) && (a3 == a6) && (a4 == a5)){
        printf("O numero eh um palindromo.");
    } else {
        printf("O numero nao eh um palindromo.");
    }
}