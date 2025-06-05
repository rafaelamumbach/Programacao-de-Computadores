/*****************************************************************************/
/*     Programa .....: v09.c                                                 */
/*     Data .........: 04/06/2025                                            */
/*     Linguagem ....: C                                                     */
/*     Disciplina ...: Programacao de Computadores                           */
/*     Branch .......: Vetores                                               */
/*     Aluna ........: Rafaela Mumbach Buenos                                */
/*     Lista ........: 1                                                     */
/*---------------------------------------------------------------------------*/
/*     Versao 0.1                                                            */
/*****************************************************************************/
#include <stdio.h>

int main(){
    int v[5];
    int i, j, maior;

    for (i=0; i<5; i++) {
        scanf("%d",&v[i]);
    }
    
    maior=0;
    for (i=0; i<5; i++){
        if(v[i]> maior){
            maior = v[i];
        }
    }
    printf("%d >> maior!", maior);
}