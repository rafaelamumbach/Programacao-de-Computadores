#include <stdio.h>

int main() {
    int dividendo, divisor, quociente = 0, original;

    scanf("%d%d", &dividendo, &divisor); //21 4
 
    if (divisor == 0) {
        printf("Divisor nao pode ser igual a zero!");
    } else {
        original = dividendo; //original = 21

        while (dividendo >= divisor) { //sim
            dividendo = dividendo - divisor; // d= 21-4; d= 17
            quociente++; //1
            printf("%d - %d = %d\n", dividendo + divisor, divisor, dividendo); //17+4, 4, 17
        }

        printf("\nLogo: %d / %d = %d", original, divisor, quociente); //21, 4, 1
    }
}