#include <stdio.h>

int main(){
    int num;
    int i;

    for (i = 0; i < 10; i++){
        printf("Informe o nro %d/10: ", i+1);
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("Numero par!\n");
        }
    }
}