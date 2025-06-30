#include <stdio.h>

int main(){
    int v[10], i, total=0;
    float p[10];
    
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
        total+=v[i];
    }
    
    for(i=0;i<10;i++){
        p[i] = (float)100*v[i]/total;
    }
    
    for(i=0;i<10;i++){
        printf("%.2f", &p[i]);
    }

}