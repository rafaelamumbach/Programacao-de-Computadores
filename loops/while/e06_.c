#include <stdio.h>

int main() {
    int a, b, resto;

    scanf("%d %d", &a, &b);

    while(b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("MDC = %d\n", a);

}