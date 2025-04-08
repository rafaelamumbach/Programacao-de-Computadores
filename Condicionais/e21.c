#include <stdio.h>

int main(){
    int l1, c1, a1, temp1, maior1, meio1, menor1;
    int l2, c2, a2, temp2, maior2, meio2, menor2;

    printf("Informe a largura, comprimento e altura da caixa 1: ");
    scanf("%d%d%d", &l1, &c1, &a1);

    printf("Informe a largura, comprimento e altura da caixa 2: ");
    scanf("%d%d%d", &l2, &c2, &a2);

    if(l1>c1){
        temp1 = l1;
        l1 = c1;
        c1 = temp1;
    }

    if(c1>a1){
        temp1 = c1;
        c1 = a1;
        a1 = temp1;
    }

    if(l1>c1){
        temp1 = l1;
        l1 = c1;
        c1 = temp1;
    }

    menor1 = l1;
    meio1 = c1;
    maior1 = a1;

    if(l2>c2){
        temp2 = l2;
        l2 = c2;
        c2 = temp2;
    }

    if(c2>a2){
        temp2 = c2;
        c2 = a2;
        a2 = temp2;
    }

    if(l2>c2){
        temp2 = l2;
        l2 = c2;
        c2 = temp2;
    }

    menor2 = l2;
    meio2 = c2;
    maior2 = a2;

    if ((menor1<menor2) && (meio1<meio2) && (maior1<maior2)) {
        printf("Eh possivel colocar a primeira caixa dentro da segunda.");
    } else {
        printf("NAO eh possivel colocar a primeira caixa dentro da segunda.");
    }
}