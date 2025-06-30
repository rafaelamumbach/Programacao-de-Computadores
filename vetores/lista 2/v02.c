/*****************************************************************************/
/*     Programa .....: v02.c                                                 */
/*     Data .........: 26/06/2025                                            */
/*     Linguagem ....: C                                                     */
/*     Disciplina ...: Programacao de Computadores                           */
/*     Branch .......: Vetores                                               */
/*     Aluna ........: Rafaela Mumbach Buenos                                */
/*     Lista ........: 2                                                     */
/*---------------------------------------------------------------------------*/
/*     Versao 0.1                                                            */
/*****************************************************************************/
#include <stdio.h>

int main(){
    int v[5];
    int i, j;
    int apareceu = 0, elemento;

    for (i = 0; i < 5; i++){
        scanf("%d", &v[i]); //1, 2, 3, 4, 1
    }

    for (i = 0; i < 5; i++){
        apareceu = 0;
        for (j = 0; j < 5;j++){
            if(v[i]==v[j]){
                apareceu++;
                elemento = v[i];
            }
        }
    }

    // iteracao 0: i=1, j=1, if= sim, apareceu=1; elemento=1;
    // iteracao 1: i=1, j=2, if= nao, apareceu=1; elemento=1;
    // iteracao 2: i=1, j=3, if= nao, apareceu=1; elemento=1;
    // iteracao 3: i=1, j=4, if= nao, apareceu=1; elemento=1;
    // iteracao 4: i=1, j=1, if= sim, apareceu=2; elemento=1;

    if(apareceu==1){
        printf("Nenhum numero apareceu + que uma vez.");
    } else {
        printf("O elemento [%d] foi o que mais se repetiu, aparecendo (%d) vezes.", elemento, apareceu); //1, apareceu 2 vzs.
    }
}
