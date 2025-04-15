#include <stdio.h>

int main(){
    int i, j, n, fat;
    
    for(i=1; i<=10; i++){
        printf("\nNro %d/10: ", i);
        scanf("%d", &n);
        
        if(n < 20){
            fat = 1;
            for(j=1; j<=n; j++){ 
                fat = fat * j;
            }
            printf("\nO fatorial de %d! eh: %d", n, fat);
        }
    }
    
}