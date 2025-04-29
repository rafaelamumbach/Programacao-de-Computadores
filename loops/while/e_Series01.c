#include <stdio.h>

int main(){
    int n, i;
    float soma = 0;

    scanf("%d", &n); //5

    for (i = 1; i <= n; i++){ 
        soma += 1.0 / i; // soma = soma + (1.0 / i);
        
        // i começa em 1 e vai até N
        // Iterações:
        // i = 1 → soma += 1.0 / 1   → soma = 1.0
        // i = 2 → soma += 1.0 / 2   → soma = 1.0 + 0.5 = 1.5
        // i = 3 → soma += 1.0 / 3   → soma = 1.5 + 0.3...
        // i = 4 → soma += 1.0 / 4   → soma = ...
        // i = 5 → soma += 1.0 / 5   → soma = ...

    }
    printf("Soma da serie H = 1 + 1/2 + ... 1/N: %.2f\n", soma);
}