#include <stdio.h>

int main() {
    int n, menor = 0;

    printf("Informe um nro (0 p/ sair): ");
    scanf("%d", &n);

    while (n != 0) {
        if (n > 0) {
            if (menor == 0 || n < menor) {
                menor = n;
            }
        }

        printf("Informe um nro (0 p/ sair): ");
        scanf("%d", &n);
    }

    if (menor == 0) {
        printf("Nenhum nro positivo foi informado.\n");
    } else {
        printf("O menor nro informado foi %d :)\n", menor);
    }
}