#include <stdio.h>

int main() {
    int a, b, produto, resto; //4, 6

    scanf("%d %d", &a, &b); //4, 6

    produto = a * b; // produto=24;

    while(b != 0) {
        resto = a % b; //resto = 4 //resto = 2 //resto = 1
        a = b; //a=6 //a=4 //2
        b = resto; //b=4 //b=2 //1
    }

    printf("MMC = %d\n", produto / a); //24 / 2 = 12.

}