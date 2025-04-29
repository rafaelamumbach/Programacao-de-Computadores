#include <stdio.h>

int main(){
    int n1, n2, i, menor, mdc;

    scanf("%d", &n1); //12
    scanf("%d", &n2); //20

    if(n1 < n2){ 
        menor = n1; 
    } else {
        menor = n2;
    }

    for (i = menor; i >= 1; i--) {
        printf("i = %d\n", i);
        if (n1 % i == 0 && n2 % i == 0) {
            mdc = i;
            break;
        }
    }

    printf("MDC entre %d e %d: %d\n", n1, n2, mdc);
    
}