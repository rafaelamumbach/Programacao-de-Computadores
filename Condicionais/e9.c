#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5;
    printf("Digite 5 numeros inteiros entre 1 e 6:\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    if (n1 == n2 && n2 == n3 && n3 == n4 && n4 == n5)
        printf("Todos os 5 valores sao iguais.\n");

    else if (
        (n1 == n2 && n2 == n3 && n3 == n4 && n4 != n5) ||
        (n1 == n2 && n2 == n3 && n3 == n5 && n5 != n4) ||
        (n1 == n2 && n2 == n4 && n4 == n5 && n5 != n3) ||
        (n1 == n3 && n3 == n4 && n4 == n5 && n5 != n2) ||
        (n2 == n3 && n3 == n4 && n4 == n5 && n5 != n1)
    )
        printf("Ha 4 valores iguais e 1 diferente.\n");

    else if (
        (n1 + n2 + n3 + n4 + n5 == 15 || n1 + n2 + n3 + n4 + n5 == 20) &&
        n1 != n2 && n1 != n3 && n1 != n4 && n1 != n5 &&
        n2 != n3 && n2 != n4 && n2 != n5 &&
        n3 != n4 && n3 != n5 &&
        n4 != n5
    )
        printf("Os valores formam uma sequencia.\n");

    else if (
        (n1 == n2 && n2 == n3 && n4 == n5 && n1 != n4) ||
        (n1 == n2 && n2 == n4 && n3 == n5 && n1 != n3) ||
        (n1 == n3 && n3 == n5 && n2 == n4 && n1 != n2) ||
        (n2 == n3 && n3 == n4 && n1 == n5 && n2 != n1)
    )
        printf("Full hand (3 iguais e 2 iguais).\n");

    else
        printf("Nenhum dos casos anteriores.\n");

}