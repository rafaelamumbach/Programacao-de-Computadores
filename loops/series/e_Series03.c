#include <stdio.h>

int main() {
    int a, r, n, i;
    int termo = 0, soma = 0;

    printf("Primeiro termo: ");
    scanf("%d", &a); //3

    printf("Razao: ");
    scanf("%d", &r); //2

    printf("Nro de termos: ");
    scanf("%d", &n); //5

    printf("Termos da PA: ");
    
    for (i = 0; i < n; i++) {
        termo = a + i * r; 
        printf("%d ", termo);
        soma += termo;
    }

    // Iteracao 1: 0<5 → termo = 3+0*2 = 3. soma = 3;
    // Iteracao 2: 1<5 → termo = 3+1*2 = 5. soma = 3+5 = 8;
    // Iteracao 3: 2<5 → termo = 3+2*2 = 7. soma = 3+5+7 = 16;
    // Iteracao 4: 3<5 → termo = 3+3*2 = 9. soma = 3+5+7+9 = 24;
    // Iteracao 5: 4<5 → termo = 3+4*2 = 11. soma = 3+5+7+9+11 = 35;
    // Iteracao 6: 5<5 → falso, fim do loop.

    printf("\n> Soma dos %d primeiros termos: %d\n", n, soma);
    
}