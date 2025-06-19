/*****************************************************************************/
/*     Programa .....: v07.c                                                 */
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
    int v[10];
    int i, j, cont;

    for (i=0; i<10; i++) {
        scanf("%d",&v[i]);
    }
    
    cont=0;
    for (i=0; i<10; i++){
        if(v[i]<0){
            cont++;
            printf("%d ", v[i]);
        }
    }
    printf("\n%d negativos.", cont);
}