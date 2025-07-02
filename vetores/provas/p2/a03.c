#include <stdio.h>

int main() {
    int participou[10];
    int codigo, i;

    for (i = 0; i < 10;i++){
        participou[i] = 0;
    }
    while (1){
        printf("Codigo do aluno: "); //2 8 7 1 6 2 0 8 2 6 1 7 5 6 -1
        scanf("%d", &codigo);

        if (codigo < 0){
            break;
        }

        if (codigo >= 0 && codigo <= 9){
            participou[codigo] = 1;
        }
    }
    
    printf("\nAlunos que nao participaram de nenhum encontro:\n");
    for (i = 0; i < 10; i++){
        if (participou[i] == 0){
            printf("Aluno %d\n", i);
        }
    }
    // i=0;i<10;i++
    // 3, 4, 9
}