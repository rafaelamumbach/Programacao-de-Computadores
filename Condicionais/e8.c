#include <stdio.h>

void main(){ 
    int n1, n2, n3, n4, n5, n6;
    int soma=0;
    scanf("%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6);
    
    if(n1% 2 == 0){
    	soma=n1;
    	printf("%d\n", n1);
	}

	if(n2% 2 == 0){
    	soma=soma+n2;
    	printf("%d\n", n2);
	}
	
	if(n3% 2 == 0){
    	soma=soma+n3;
    	printf("%d\n", n3);
	}
	
	if(n4% 2 == 0){
    	soma=soma+n4;
    	printf("%d\n", n4);
	}
	
	if(n5% 2 == 0){
    	soma=soma+n5;
    	printf("%d\n", n5);
	}
	
	if(n6% 2 == 0){
    	soma=soma+n6;
    	printf("%d\n", n6);
	}

	printf("Resultado: %d", soma);
    
}