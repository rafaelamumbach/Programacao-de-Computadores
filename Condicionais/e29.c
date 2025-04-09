#include <stdio.h>

int main() {
    int d1, m1, a1;
    int d2, m2, a2;
    int dias_mes1, dias_mes2;
    int data1_valida = 0;
    int data2_valida = 0;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d%d%d", &d1, &m1, &a1);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d%d%d", &d2, &m2, &a2);

    if (m1 >= 1 && m1 <= 12) {
        if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) {
            dias_mes1 = 31;
        } else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
            dias_mes1 = 30;
        } else {
            if ((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)) {
                dias_mes1 = 29;
            } else {
                dias_mes1 = 28;
            }
        }

        if (d1 >= 1 && d1 <= dias_mes1) {
            data1_valida = 1;
        }
    }

    if (m2 >= 1 && m2 <= 12) {
        if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12) {
            dias_mes2 = 31;
        } else if (m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) {
            dias_mes2 = 30;
        } else {
            if ((a2 % 4 == 0 && a2 % 100 != 0) || (a2 % 400 == 0)) {
                dias_mes2 = 29;
            } else {
                dias_mes2 = 28;
            }
        }

        if (d2 >= 1 && d2 <= dias_mes2) {
            data2_valida = 1;
        }
    }

    if (data1_valida == 1 && data2_valida == 1) {
        printf("Datas em ordem cronologica crescente:\n");

        if (a1 < a2) {
            printf("%02d/%02d/%04d\n", d1, m1, a1);
            printf("%02d/%02d/%04d\n", d2, m2, a2);
        } else if (a1 > a2) {
            printf("%02d/%02d/%04d\n", d2, m2, a2);
            printf("%02d/%02d/%04d\n", d1, m1, a1);
        } else {
            if (m1 < m2) {
                printf("%02d/%02d/%04d\n", d1, m1, a1);
                printf("%02d/%02d/%04d\n", d2, m2, a2);
            } else if (m1 > m2) {
                printf("%02d/%02d/%04d\n", d2, m2, a2);
                printf("%02d/%02d/%04d\n", d1, m1, a1);
            } else {
                if (d1 <= d2) {
                    printf("%02d/%02d/%04d\n", d1, m1, a1);
                    printf("%02d/%02d/%04d\n", d2, m2, a2);
                } else {
                    printf("%02d/%02d/%04d\n", d2, m2, a2);
                    printf("%02d/%02d/%04d\n", d1, m1, a1);
                }
            }
        }
    } else {
        printf("Uma ou ambas as datas sao invalidas.\n");
    }

}