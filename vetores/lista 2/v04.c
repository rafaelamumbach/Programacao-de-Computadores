/*****************************************************************************/
/*     Programa .....: v04.c                                                 */
/*     Data .........: 26/06/2025                                            */
/*     Linguagem ....: C                                                     */
/*     Disciplina ...: Programacao de Computadores                           */
/*     Branch .......: Vetores                                               */
/*     Aluna ........: Rafaela Mumbach Buenos                                */
/*     Lista ........: 2                                                     */
/*---------------------------------------------------------------------------*/
/*     Versao 0.1                                                            */
/*****************************************************************************/
#include <stdio.h>

int main(){
    int cont[10]; //intervalo entre 1 a 10
    int i, num;

    for(i=0;i<10;i++){
        cont[i] = 0; //zerando o vetor de contador
    }

    do{
        printf("Informe um nro: ");
        scanf("%d", &num);
        
        if((num>=1)&&(num<=10)){
            cont[num]++; //cont[posicao]++. conta qtas vezes ocorreu em x posicao q eh determinada por num.
        }
    } while (num >= 0);
    
    for(i=0;i<10;i++){
        printf("%d: %d ocorrencia(s)\n", i, cont[i]);
    }

}