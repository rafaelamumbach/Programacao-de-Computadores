#include <stdio.h>

void main(){ 
	int n1, n2, n3, temp; 
	scanf("%d%d%d", &n1, &n2, &n3); 
	
	if(n1>n2){ 
		temp = n1; 
		n1 = n2; 
		n2 = temp; 
	}
	
	if(n2>n3){ 
		temp = n2; 
		n2 = n3; 
		n3 = temp; 
	}
	
	if(n1>n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	printf("Menor valor: %d", n1);
	
}