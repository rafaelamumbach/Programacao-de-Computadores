#include <stdio.h>

int main(){
    int n, i, num;
    printf("Informe qtos numeros vc quer inserir: ");
    scanf("%d", &n);

    printf("OK!\n");
    for (i = 0; i < n; i++){
        printf("Insira o numero %d/%d: ", i+1, n);
        scanf("%d", &num);

        if(num % 2 != 0){
            printf("Numero impar!\n");
        }
    }
}