/*****************************************************************************/
/*     Programa .....: v08.c                                                 */
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
    int i, j, div, cont;

    for (i=0; i<10; i++) {
        scanf("%d",&v[i]);
    }
    
    cont=0;
    for (i=0; i<10; i++){
        div=0;
        for (j=1; j<=v[i]; j++){
            if (v[i] % j == 0){
                div++;
            }
        }
        
        if (div==2){
            printf("%d ",v[i]);
            cont++;
        }
    }
    printf("\n%d primos.", cont);
}