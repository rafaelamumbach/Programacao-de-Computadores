#include <stdio.h>

int main() {
    int v[5];
    int i;
    int primeiro;

    for (i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    while (v[0] % 2 == 0) { 
        primeiro = v[0];

        for (i = 0; i < 5 - 1; i++) {
            v[i] = v[i + 1];
        }

        v[5 - 1] = primeiro;
    }

    // teste de mesa!
    // 6 2 4 1 8
    // primeiro = 6
    // v[0]= 2;
    // v[4]=6;
    // apos 1a rotacao: 2 4 1 8 6

    // primeiro = 2
    // v[0]= 4;
    // v[4]= 2;
    // apos 2a rotacao: 4 1 8 6 2

    // primeiro = 4
    // v[0]= 1;
    // v[4]= 4;
    // apos 2a rotacao: 1 8 6 2 4


    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

}