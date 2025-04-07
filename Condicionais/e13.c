#include <stdio.h>

int main(){
    float p1, p2, p3, exc;
    int mat;
    float media = 0;
    scanf("%f%f%f%f", &p1, &p2, &p3, &exc);
    printf("Matricula: ");
    scanf("%d", &mat);

    media = (p1 + (2 * p2) + (2 * p3) + (4 * exc)) / 10;

    printf("-----------------------------------\n");

    if(media>=9.0){
        printf("| Conceito: A\n| Aprovado!\n| Media: %.2f\n| Notas: %.2f, %.2f, %.2f, %.2f\n| Matricula: %d", media, p1, p2, p3, exc, mat);
    }
    
    if((media >= 7.5) && (media < 9.0)){
        printf("| Conceito: B\n| Aprovado!\n| Media: %.2f\n| Notas: %.2f, %.2f, %.2f, %.2f\n| Matricula: %d", media, p1, p2, p3, exc, mat);         
    }
    
    if ((media >= 6.0) & (media < 7.5)){
        printf("| Conceito: C\n| Aprovado!\n| Media: %.2f\n| Notas: %.2f, %.2f, %.2f, %.2f\n| Matricula: %d", media, p1, p2, p3, exc, mat);
    }

    if ((media >= 4.0) & (media < 6.0)){
        printf("| Conceito: D\n| Reprovado!\n| Media: %.2f\n| Notas: %.2f, %.2f, %.2f, %.2f\n| Matricula: %d", media, p1, p2, p3, exc, mat);
    }
    
    if (media < 4.0){
        printf("| Conceito: E\n| Reprovado!\n| Media: %.2f\n| Notas: %.2f, %.2f, %.2f, %.2f\n| Matricula: %d", media, p1, p2, p3, exc, mat);
    }

    printf("\n-----------------------------------");
}