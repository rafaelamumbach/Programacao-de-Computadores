#include <stdio.h>

int main(){
    int l1, c1, a1;
    int l2, c2, a2;

    printf("Informe a largura, comprimento e altura da caixa 1: ");
    scanf("%d%d%d", &l1, &c1, &a1);

    printf("Informe a largura, comprimento e altura da caixa 2: ");
    scanf("%d%d%d", &l2, &c2, &a2);

    if (l1 < l2 && c1 < c2 && a1 < a2) {
        printf("Eh possivel colocar a primeira caixa dentro da segunda.");
    } else {
        printf("NAO eh possivel colocar a primeira caixa dentro da segunda.");
    }
}