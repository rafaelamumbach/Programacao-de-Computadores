/*****************************************************************************/
/*     Programa .....: v03.c                                                 */
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
    for(i=0;i<10;i++){
        printf("%d/10 valores: ", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Numeros pares: [ ");
    for(i=0;i<10;i++){
        if(v[i]% 2 == 0){
            printf("%d ", v[i]);
        }
    }
    printf("]");
    printf("\n");
    
    printf("Numeros impares: [ ");
    for(i=0;i<10;i++){
        if(v[i]% 2 != 0){
            printf("%d ", v[i]);
        }
    }
    printf("]");
}