#include <stdio.h>

int main(){
    int v[10], i;
    for(i=0;i<10;i++){
        printf("%d/10 valores: ", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Posicoes onde ha um valor menor que zero: [ ");
    for(i=0;i<10;i++){
        if(v[i] < 0){
            printf("%d ", i);
        }
    }
    printf("]");
}