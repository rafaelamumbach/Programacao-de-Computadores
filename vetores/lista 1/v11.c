/*****************************************************************************/
/*     Programa .....: v11.c                                                 */
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
    int i;
    float v[5];
    float media=0, soma=0;
    
    for (i=0; i<5; i++) {
        scanf("%f",&v[i]);
        soma += v[i];
    }
    
    media = soma/5;
    printf("Media: %.1f\n", media);
    for (i=0; i<5; i++) {
        if(v[i] > media){
            printf("%.0f eh maior que a media.\n", v[i]);
        }
    }
}