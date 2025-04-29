#include <stdio.h>

int main(){
    int num,i;

    for (;i<2;){
        printf("Informe um nro: ");
        scanf("%d", &num);

        if(num % 2 == 0 && num !=0){
            printf("Numero par!\n");
        }

        if(num ==0){
            printf("Fim.\n");
            break;
        }
    }
}