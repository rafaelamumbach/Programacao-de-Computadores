#include <stdio.h> //exercicio feito em aula; como verificar se um numero eh primo

int main(){
    int n, div=0, i;
    scanf("%d", &n);

    if(n<=1){
        printf("Nro menor ou igual a 1!");
    } else {
        for (i = 1; i <= n; i++){
            if(n%i==0){
                div++;
            }
        }
    }

    if(div==2){
        printf("Primo!");
    } else {
        printf("Nao primo!");
    }
}