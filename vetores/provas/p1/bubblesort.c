#include <stdio.h>

int main(){
    int vet[11] = {2, 6, 10, 2, 3, 5, 4, 23, 22, 21, 20};
    int i, j, aux;

    for (i = 0; i < 11 - 1; i++) {
        for (j = 0; j < 11 - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

    printf("Ordenado: ");
    for (i = 0; i < 11; i++) {
        printf("%d ", vet[i]);
    }
}