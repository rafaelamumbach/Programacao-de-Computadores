#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2;
    int form = 0;
    int res = 0;

    printf("Informe o ponto x1: ");
    scanf("%d", &x1);

    printf("Informe o ponto x2: ");
    scanf("%d", &x2);

    printf("Informe o ponto y1: ");
    scanf("%d", &y1);

    printf("Informe o ponto y2: ");
    scanf("%d", &y2);

    form = (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    res = sqrt(form);

    if(res==5){
        printf("Os pontos formam um quadrado.");
    } else{
        printf("Os pontos NAO formam um quadrado.");
    }
}