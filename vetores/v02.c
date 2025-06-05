/*****************************************************************************/
/*     Programa .....: v02.c                                                 */
/*     Data .........: 28/05/25                                              */
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
    int v[10], i;
    for(i=0; i<10;i++){
        printf("%d/10 nros: ", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Vetor: [ ");
    for(i=9;i>=0; i--){
        printf("%d ", v[i]);
    }
    printf("]");
}