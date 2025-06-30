/*****************************************************************************/
/*     Programa .....: v03.c                                                 */
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
    int v[5];
    int i, j;
    int menos = 6;
    int elemento;
    int contado;
    int cont;

    for (i = 0; i < 5; i++){
        scanf("%d", &v[i]); // 2, 3, 2, 3, 1
    }

    for (i = 0; i < 5; i++){
        contado = 0;

        for (j = 0; j < i; j++){
            if (v[i] == v[j]){
                contado = 1;
            }
        }

        if (contado == 0){
            cont = 0;

            for (j = 0; j < 5; j++){
                if (v[i] == v[j]){
                    cont++;
                }
            }

            if (cont < menos){
                menos = cont;
                elemento = v[i];
            }
        }
    }

    // iteracao 0: i=2, j NAO eh menor que i= contado=0; cont = 1; cont eh menor q 6? SIM, menos = 1; elemento = 2 //2, 2
    // iteracao 1: i=2, j NAO eh menor que i= contado=0; cont = 1; cont eh menor q 6? SIM, menos = 1; elemento = 3 //2, 3
    // iteracao 2: i=2, j NAO eh menor que i= contado=0; cont = 2; cont eh menor q 6? SIM, menos = 2; elemento = 2 //2, 2
    // iteracao 3: i=2, j NAO eh menor que i= contado=0; cont = 2; cont eh menor q 6? SIM, menos = 2; elemento = 3 //2, 3
    // iteracao 4: i=2, j EH menor que i= contado=1; cont = 1; cont eh menor q 6? SIM, menos = 1; elemento = 1 //2, 1


    printf("O elemento [%d] foi o que menos se repetiu, aparecendo (%d) vez(es).\n", elemento, menos);
}