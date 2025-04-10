#include <stdio.h>

int main() {
    int cod, idade, i;
    int menor_curso;
    int cont_idade = 0;
    int cont1 = 0, cont2 = 0, cont3 = 0;
    float soma1 = 0, soma2 = 0, soma3 = 0;
    float mediaid1 = 0, mediaid2 = 0, mediaid3 = 0;

    for (i = 0; i < 15; i++) {
        printf("Codigo curso e idade (aluno %d/15): ", i + 1);
        scanf("%d%d", &cod, &idade);

        if (cod == 1) {
            cont1++;
            soma1 += idade;
        } else if (cod == 2) {
            cont2++;
            soma2 += idade;
        } else if (cod == 3) {
            cont3++;
            soma3 += idade;
        }

        if (idade >= 20 && idade <= 25) {
            cont_idade++;
        }
    }

    if (cont1 > 0){
        mediaid1 = soma1 / cont1;
    } else if (cont2 > 0){
        mediaid2 = soma2 / cont2;
    } else if (cont3 > 0){
        mediaid3 = soma3 / cont3;
    }

    if (mediaid1 <= mediaid2 && mediaid1 <= mediaid3) {
        menor_curso = 1;
    } else if (mediaid2 <= mediaid1 && mediaid2 <= mediaid3) {
        menor_curso = 2;
    } else {
        menor_curso = 3;
    }

    printf("\nEstatisticas :D\n");
    printf("Alunos matriculados em ENGENHARIA: %d\n", cont1);
    printf("Alunos matriculados em COMPUTACAO: %d\n", cont2);
    printf("Alunos matriculados em ADMINISTRACAO: %d\n", cont3);
    printf("Alunos com idade entre 20 e 25 anos: %d\n", cont_idade);
    printf("Curso com menor media de idade: %d\n", menor_curso);
    printf("Fim! :D\n");

}