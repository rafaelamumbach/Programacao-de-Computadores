#include <stdio.h>

int main(){
    int v[10], i;
    for(i=0; i<10;i++){
        printf("%d/10 nros: ", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Vetor: [ ");
    for(i=0;i<10; i++){
        printf("%d ", v[i]);
    }
    printf("]");
}