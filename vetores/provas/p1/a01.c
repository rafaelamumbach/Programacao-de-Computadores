#include <stdio.h>

int main() {
    int nota[10], faltas[10];
    int i, soma = 0, media = 0;
    int alunos = 0;
    int aprovados = 0;

    for (i = 0; i < 10; i++) {
        printf("Informe a nota e a qt de faltas do aluno %d: ", i + 1);
        scanf("%d%d", &nota[i], &faltas[i]);
        soma += nota[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        if (nota[i] > media) {
            alunos++;
        }

        if (nota[i] >= 6 && faltas[i] < 20) {
            aprovados++;
        }
    }

    printf("\nMedia da turma: %d\n", media);
    printf("Alunos com nota acima da media: %d\n", alunos);
    printf("Alunos aprovados: %d\n", aprovados);

}