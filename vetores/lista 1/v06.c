/*****************************************************************************/
/*     Programa .....: v06.c                                                 */
/*     Data .........: 03/06/25                                              */
/*     Linguagem ....: C                                                     */
/*     Disciplina ...: Programacao de Computadores                           */
/*     Branch .......: Vetores                                               */
/*     Aluna ........: Rafaela Mumbach Buenos                                */
/*     Lista ........: 1                                                     */
/*---------------------------------------------------------------------------*/
/*     Versao 0.1                                                            */
/*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10], i;
    for(i=0;i<10;i++){
        printf("%d/10 valores: ", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Vetor modificado: [");
    for(i=0;i<10;i++){
        if(v[i] < 0){
            printf("%d ", abs(v[i]));
        } else {
            printf("%d ", v[i]);
        }
    }
    printf("]");
}