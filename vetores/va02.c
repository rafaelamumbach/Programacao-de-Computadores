/*****************************************************************************/
/*     Programa .....: va02.c                                                 */
/*     Data .........: 19/06/2025                                            */
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
    int curso1[5], curso2[5], i, j, encontrado;
    
    printf("Curso 1: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &curso1[i]);
    }
    
    printf("Curso 2: ");
    for(j = 0; j < 5; j++){
        scanf("%d", &curso2[j]);
    }
    
    // curso 1 = 1, 2, 3, 4, 5
    // curso 2 = 2, 4, 5, 6, 7
    // os dois cursos = 2, 4, 5
    // pelo menos 1 = 1, 2, 3, 4, 5, 6, 7

    // Interseccao
    printf("Ambos os cursos: [ ");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if(curso1[i]==curso2[j]){
                printf("%d ", curso1[i]);
            }
        }
    }
    printf("]\n");

    // Uniao
    printf("Pelo menos um dos cursos: [ ");
    for (i = 0; i < 5; i++){
        printf("%d ", curso1[i]);
    }

    for (j = 0; j < 5; j++){
        encontrado = 0;
        for (i = 0; i < 5; i++){
            if (curso2[j] == curso1[i]){
                encontrado = 1;
                break;
            }
        }
        
        if (encontrado == 0){
            printf("%d ", curso2[j]);
        }
    }   
    printf("]\n");
}