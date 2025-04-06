#include <stdio.h>

void main(){ 
    	int n1, n2, n3, n4, temp;
    	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    	if (n1 > n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
   	 if (n2 > n3){ 
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	
    	if (n3 > n4){
		temp = n3;
		n3 = n4;
		n4 = temp;
	}

   	 if (n1 > n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	if (n2 > n3){
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
    
    	if (n1 > n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}

    	printf("Ordem crescente: %d %d %d\n", n2, n3, n4);
}