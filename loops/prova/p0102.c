#include <stdio.h>

int main() {
    int inicio, cont, n, soma;
    scanf("%d", &inicio); //18

    for (cont = 0; cont < 50; inicio++) { // 0, <50, 19
        n = inicio;                       // n=18;
        soma = 0;

        while (n > 0) {
            soma = soma + n % 10; // pega ultimo digito; soma = 8+1=9;
            n = n / 10;           // tira ultimo digito; n = 0;
        }

        if (soma != 0 && inicio % soma == 0) {
            printf("%d ", inicio);
            cont++;
        }
    }

    printf("\n");

}