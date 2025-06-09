/*****************************************************************************/
/*     Programa .....: v13.c                                                 */
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

int main(){
    int i;
    int v[5];
    int soma_par=0, qtd_imp=0;
    
    for(i=0;i<5;i++){
        printf("%d/5 nros: ", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0;i<5;i++){
        if(v[i]%2==0){
            printf("Numero PAR:::::::: %d Posicao:::::::: %d\n", v[i], i);
            soma_par+=v[i];
        } else {
            printf("Numero IMPAR:::::::: %d Posicao:::::::: %d\n", v[i], i);
            qtd_imp+=1;
        }
    }
    printf("**** Soma dos pares: %d\n", soma_par);
    printf("**** Qtd impares: %d", qtd_imp);
}