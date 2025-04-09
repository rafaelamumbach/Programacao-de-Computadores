#include <stdio.h>

int main(){
    int cod, qtd;
    float total=0;

    printf(" -----------\n");
    printf("|   Menu    |\n");
    printf(" -----------\n\n");
    printf("100 - Cachorro quente: R$10,00\n");
    printf("101 - Bauru simples: R$18,00\n");
    printf("102 - Bauru com ovo: R$20,00\n");
    printf("103 - Hamburguer: R$5,00\n");
    printf("104 - Cheese burguer: R$15,00\n");
    printf("105 - Refrigerante: R$4,00\n\n");

    printf(" ------------------------------------------\n");
    printf("|   Digite o codigo da opcao escolhida:    |\n");
    printf(" ------------------------------------------\n");
    scanf("%d",&cod);

    printf(" ----------------------------------------------\n");
    printf("|   Digite a quantidade da opcao escolhida:    |\n");
    printf(" ----------------------------------------------\n");
    scanf("%d", &qtd);

    if(cod == 100){
        total = 10.0 * qtd;
        printf(" ---------------------\n");
        printf("|   Total: R$ %.1f    |\n", total);
        printf(" ---------------------\n");
    } else if (cod == 101){
        total = 18.0 * qtd;
        printf(" ---------------------\n");
        printf("|   Total: R$ %.1f    |\n", total);
        printf(" ---------------------\n");
    } else if(cod == 102){
        total = 20.0 * qtd;
        printf(" ---------------------\n");
        printf("|   Total: R$ %.1f    |\n", total);
        printf(" ---------------------\n");
    } else if (cod==103){
        total = 5.0 * qtd;
        printf(" ---------------------\n");
        printf("|   Total: R$ %.1f    |\n", total);
        printf(" ---------------------\n");
    } else if(cod==104){
        total = 14.0 * qtd;
        printf(" ---------------------\n");
        printf("|   Total: R$ %.1f    |\n", total);
        printf(" ---------------------\n");
    } else if(cod==105){
        total = 4.0 * qtd;
        printf(" ---------------------\n");
        printf("|   Total: R$ %.1f    |\n", total);
        printf(" ---------------------\n");
    } else {
        printf(" ------------------------------------------\n");
        printf("|   Codigo invalido. Tente novamente ;)    |\n");
        printf(" ------------------------------------------\n");
    }

    if(cod == 101 && qtd > 2){
        printf("\n**** Voce desbloqueou um desconto de 5%%! ****\n");
        total = total - (total * 0.05);
        printf(" ----------------------------\n");
        printf("|   Total c/desc: R$ %.1f    |\n", total);
        printf(" ----------------------------\n");
    }
}