/*****************************************************************************/
/*     Programa .....: v10.c                                                 */
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
    int v[50];
    int i, j, menor;

    scanf("%d",&v[0]);
    menor = v[0];
    for (i=1; i<=49; i++) {
        scanf("%d",&v[i]);
    }
    
    for (i=1; i<=49; i++){
        if(v[i]< menor){
            menor = v[i];
        }
    }
    printf("%d >> menor!", menor);
}