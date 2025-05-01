#include <stdio.h> //exercicio feito em aula; como printar numeros primos de 2 a 100

int main() {
    int n, div, cont;

    for(n = 2; n <= 100; n++) {
        cont = 0; 
        for(div = 1; div <= n; div++) {
            if(n % div == 0) {
                cont++;
            }
        }
        if(cont == 2) {
            printf("%d\n", n);
        }
    }
}