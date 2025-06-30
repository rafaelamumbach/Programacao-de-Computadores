#include <stdio.h>

int main() {
    int fisica[100], mat[100];
    int i, j, existe;

    printf("Digite os codigos dos alunos de FISICA:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &fisica[i]);
        if (fisica[i] == 0) break;
    }

    printf("Digite os codigos dos alunos de MATEMATICA:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &mat[i]);
        if (mat[i] == 0) break;
    }

    printf("\nAlunos SOMENTE em FISICA:\n");
    for (i = 0; fisica[i] != 0; i++) {
        existe = 0;
        for (j = 0; mat[j] != 0; j++) {
            if (fisica[i] == mat[j]) {
                existe = 1;
                break;
            }
        }
        if (existe == 0) {
            printf("%d ", fisica[i]);
        }
    }
}