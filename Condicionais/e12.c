#include <stdio.h>

int main(){
    float n1, n2, n3;
    char calculo;
    scanf("%f%f%f", &n1, &n2, &n3);
    fflush(stdin);
    scanf("%c", &calculo);

    if ((calculo == 'A') || (calculo == 'a')){
        printf("Media aritmetica: %.2f", ((n1 + n2 + n3) / 3));
    } else if ((calculo == 'H') || (calculo == 'h')){
        printf("Media harmonica: %.2f", 3 / ((1/n1) + (1/n2) + (1/n3)) );
    } else if ((calculo != 'H') || (calculo != 'h') ||  (calculo != 'A') || (calculo != 'a')){
        printf("Opcao nao existente.");
    }
}