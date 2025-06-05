/*****************************************************************************/
/*     Programa .....: v01a.c                                                */
/*     Data .........: 28/05/25                                            */
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
    float notas[3], s=0, m=0; //qtos valores cabem nele
    int i;
    for(i=0; i<3;i++){
        printf("%d/3 notas: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    for(i=0;i<3; i++){
        s+=notas[i];
    }
    
    printf("Media = %.1f", s/3);
}