#include <stdio.h>

int main() {
    int n=1, menor = -1;

    printf("Informe um nro (0 p/ sair): ");
    scanf("%d", &n);

    while (n != 0) {
        printf("Informe um nro (0 p/ sair): ");
        scanf("%d", &n);

        if ((n > 0)&&((menor == -1) || (n < menor))) {
            menor = n;
        }
    }

    if (menor == -1) {
        printf("Nenhum nro positivo foi informado.\n");
    } else {
        printf("O menor nro informado foi %d :)\n", menor);
    }
}