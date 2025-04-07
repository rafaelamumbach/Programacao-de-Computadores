#include <stdio.h>

int main(){
    float p1, p2, p3, p4, temp;
    float media = 0;
    int mat;
    scanf("%f%f%f%f", &p1, &p2, &p3, &p4);
    scanf("%d", &mat);

    if(p1>p2){
        temp = p1;
        p1 = p2;
        p2 = temp;
    }

    if(p2>p3){
        temp = p2;
        p2 = p3;
        p3 = temp;
    }

    if(p3>p4){
        temp = p3;
        p3 = p4;
        p4 = temp;
    }

    if(p1>p2){
        temp = p1;
        p1 = p2;
        p2 = temp;
    }

    if(p2>p3){
        temp = p2;
        p2 = p3;
        p3 = temp;
    }

    if(p1>p2){
        temp = p1;
        p1 = p2;
        p2 = temp;
    }

    media = ((p2 + p3 + p4) / 3);

    if(media >= 6.0){
        printf("Matricula: %d\nMedia: %.2f\nAprovado!", mat, media);
    } else if(media<6.0){
        printf("Matricula: %d\nMedia: %.2f\nReprovado!", mat, media);
    }
}