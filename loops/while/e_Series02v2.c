#include <stdio.h>

int main() {
    int n;
    int numero = 1;
    int soma = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        soma += numero;   
        numero += 2;      
    }

    printf("Soma dos %d primeiros impares: %d\n", n, soma);
    
}