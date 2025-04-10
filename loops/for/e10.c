#include <stdio.h>

int main(){
    int i, n;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

    for (i = 0; i < 15; i++){
        printf("Informe um nro (%d/15): ", i + 1);
        scanf("%d", &n);

        if(n>0){
            if((n > 0) && (n <= 25)){
                cont1++;
            } else if ((n > 25) && (n <= 50)){
                cont2++;
            } else if ((n > 50) && (n <= 75)){
                cont3++;
            } else if ((n > 75) && (n <= 100)){
                cont4++;
            }
        }
    }
    printf("Foram inseridos:\n%d numeros no intervalo [0,25].\n", cont1);
    printf("%d numeros no intervalo (25,50].\n", cont2);
    printf("%d numeros no intervalo (50,75].\n", cont3);  
    printf("%d numeros no intervalo (75,100].\n", cont4);
}