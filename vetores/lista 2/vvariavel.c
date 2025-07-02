#include <stdio.h>

int main(){
    int v[100], tam=0, i, j, aux;

    for(i=0; i<100; i++){
        printf("Digite um num: ");
        scanf("%d", &v[i]);

        if(v[i] >= 0){
            tam++;
        } else {
            break;
        }
    }

    for(i=0; i < tam - 1; i++){
        for(j=0; j < tam - 1; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    
    printf("\nVetor ordenado:\n");
    for(i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }
}