#include <stdio.h>

int main(){
    int dia[10], mes[10], i, j, aux=0;
    
    for(i=0;i<10;i++){
        printf("Dia e mes (%d/10): ", i+1);
        scanf("%d %d", &dia[i], &mes[i]);
    }
    
    printf("> Antes da ordenacao: ");
    for(i=0;i<10;i++){
        printf("%d/%d ", dia[i], mes[i]);
    }
    printf("\n");
    
    for(i=0;i<10-1;i++){ 
        for(j=0;j<10-1;j++){ //10-1 pq nao pode acessar um local q n existe. o maior vai pro ultimo, segundo maior vai pro penultimo, etc
            if((mes[j] > mes[j+1])||(mes[j] == mes[j+1])&&(dia[j]>dia[j+1])){ //data atual eh maior q a data seguinte
            aux = mes[j];
            mes[j] = mes[j + 1];
            mes[j + 1] = aux;
            
            aux = dia[j];
            dia[j] = dia[j + 1];
            dia[j + 1] = aux;
            
            }
        }
    }
    
    printf("> Depois da ordenacao: ");
    for(i=0;i<10;i++){
        printf("%d/%d ", dia[i], mes[i]);
    }
    
}