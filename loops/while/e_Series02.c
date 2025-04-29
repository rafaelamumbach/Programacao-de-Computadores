#include <stdio.h>

int main() {
    int n;
    int cont = 0;
    int numero = 1;
    int soma = 0;

    scanf("%d", &n); //5

    while (cont < n) {  
        soma += numero; 
        numero += 2;     
        cont += 1;
    }

    // Iteracao 1: cont = 0 < 5 → soma = 0 + 1 = 1;   numero = 3; cont = 1
    // Iteracao 2: cont = 1 < 5 → soma = 1 + 3 = 4;   numero = 5; cont = 2
    // Iteracao 3: cont = 2 < 5 → soma = 4 + 5 = 9;   numero = 7; cont = 3
    // Iteracao 4: cont = 3 < 5 → soma = 9 + 7 = 16;  numero = 9; cont = 4
    // Iteracao 5: cont = 4 < 5 → soma = 16 + 9 = 25; numero = 11; cont = 5
    // Iteracao 6: cont = 5 < 5 → FALSO → fim do loop.
    // Resultado final: soma = 25.

    printf("Soma dos %d primeiros impares: %d\n", n, soma);
    
}