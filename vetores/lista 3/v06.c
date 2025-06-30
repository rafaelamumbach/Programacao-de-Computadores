#include <stdio.h> //num 6 

int main(){
    int i, cont[11], num; //cada posicao eh qts vezes cada nota aconteceu. pq podem ser notas de 0 a 10. se for fazer com while, tem q deixar num=10 por ex.
    
    for(i=0;i<11;i++){
        cont[i] = 0;
    }
    
    do{
        printf("Informe uma nota: ");
        scanf("%d", &num);
        
        if((num>=0)&&(num<=10)){
            cont[num]++;
        }
    } while (num >= 0);
    
    for(i=0;i<11;i++){
        printf("Nota %d: %d ocorrencia(s)\n", i, cont[i]);
    }
}