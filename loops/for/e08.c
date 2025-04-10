#include <stdio.h>

int main(){
    int num;

    for (;;){
        printf("Informe um nro: ");
        scanf("%d", &num);
    
        if((num % 2 != 0) && (num > 0)){
            printf("Numero impar!\n");
        }

        if(num < 0){
            printf("Fim!\n");
            break;
        }
    }
}