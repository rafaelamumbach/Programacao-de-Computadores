#include <stdio.h>

int main() {
    int n, i, soma, digitos_i, cont = 0;

    scanf("%d", &n);
    printf("Proximos dez digitos de Niven a partir do %d:\n", n);

    for (i = n; cont < 10; i++) {
        soma = 0;
        digitos_i = i;

        while (digitos_i > 0) {
            soma += digitos_i % 10; 
            digitos_i /= 10;        
        }

        if (i % soma == 0) {
            printf("%d ", i);
            cont++;
        }
    }

    printf("\n");
}