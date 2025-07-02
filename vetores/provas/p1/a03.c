#include <stdio.h>

int main(){
    int v[100];
    int i, j, aux, perc, remover;

    for (i = 0; i < 100; i++){
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 100 - 1; i++){
        for (j = 0; j < 100 - 1; j++){
            if (v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("Percentual: ");
    scanf("%d", &perc);

    remover = (perc * 100) / 100;

    printf("Valores apos remover %d%%: ", perc);
    for (i = remover; i < 100 - remover; i++){
        printf("%d ", v[i]);
    }
}