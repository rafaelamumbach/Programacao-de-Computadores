#include <stdio.h> //exercicio feito em aula; como calcular fatorial de 1 a 3

int main() {
    int n, i, fat;

    for(n = 1; n <= 3; n++) {  
        fat = 1;
        for(i = 2; i <= n; i++) { 
            fat = fat * i;
        }
        printf("%d! = %d\n", n, fat);

        // Iteracao 1: n=1 
        // Iteracao 1: i=2 → ln 1; fat = 1 * 1 = 1

        // Iteracao 2: n=2 
        // Iteracao 2: i=3 → ln 2; fat = 1 * 2 = 2

        // Iteracao 3: n=3
        // Iteracao 3: i=4 → ln 3; fat = 2 * 3 = 6

        // Iteracao 3: n=4 (ex)
        // Iteracao 3: i=5 → ln 4; fat = 6 * 4 = 24

    }
}