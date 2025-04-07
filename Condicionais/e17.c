#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float delta, x1, x2;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%d%d%d", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf("A equacao possui uma raiz real: %.1f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);

        if(x1>x2){
            printf("Raizes:\n");
            printf("x1 = %.0f\n", x2);
            printf("x2 = %.0f\n", x1);
        } else { 
            printf("Raizes:\n");
            printf("x1 = %.0f\n", x1);
            printf("x2 = %.0f\n", x2);
        }

    }
}