#include <stdio.h>

int main() {
    int n1, v1, n2, v2, n3, v3;

    scanf("%d%d", &n1, &v1); 
    scanf("%d%d", &n2, &v2);
    scanf("%d%d", &n3, &v3);

    if ((n1 == n2 && n2 == n3)) {
        if ((v1 + 1 == v2 && v2 + 1 == v3) ||
            (v1 + 1 == v3 && v3 + 1 == v2) ||
            (v2 + 1 == v1 && v1 + 1 == v3) ||
            (v2 + 1 == v3 && v3 + 1 == v1) ||
            (v3 + 1 == v1 && v1 + 1 == v2) ||
            (v3 + 1 == v2 && v2 + 1 == v1)) {

            printf("Canastra encontrada!\n");

        } else {
            printf("Nao ha canastra.\n");
        }

    } else {
        printf("Nao ha canastra.\n");
    }
}