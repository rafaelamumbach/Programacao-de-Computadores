#include <stdio.h>

int main(){
    int i, n;
    int cont = 0;

    for (i = 0; i < 15; i++){
        printf("Informe um nro (%d/15): ", i + 1);
        scanf("%d", &n);

        if((n >= 10) && (n <= 20)){
            cont++;
        }
    }
    printf("Foram inseridos %d numeros no intervalo [10,20] .", cont);
}