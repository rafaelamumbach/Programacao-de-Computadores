/*****************************************************************************/
/*     Programa .....: v14.c                                                 */
/*     Data .........: 09/06/2025                                            */
/*     Linguagem ....: C                                                     */
/*     Disciplina ...: Programacao de Computadores                           */
/*     Branch .......: Vetores                                               */
/*     Aluna ........: Rafaela Mumbach Buenos                                */
/*     Lista ........: 1                                                     */
/*---------------------------------------------------------------------------*/
/*     Versao 0.1                                                            */
/*****************************************************************************/
#include <stdio.h>

int main() {
    int t1, r, i;
    int pa[5];
    
    printf("1o termo: ");
    scanf("%d",&t1); //1
    
    printf("Razao: ");
    scanf("%d",&r); //2
    
    for(i=0; i<5; i++) {
        pa[i]= t1+i*r;
    }
    
    //[0] = 1+0*2 = 1;
    //[1] = 1+1*2 = 3;
    //[2] = 1+2*2 = 5;
    //[3] = 1+3*2 = 7;
    //[4] = 1+4*2 = 9;
    
    printf("5 pros termos da PA: [ ");
    for(i=0; i<5; i++) {
        printf("%d ", pa[i]);
    }
    printf("]");
}