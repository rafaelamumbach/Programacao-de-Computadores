#include <stdio.h>

void main(){ 
	int i;
	float a, b, c, temp;
	scanf("%d", &i);
	scanf("%f%f%f", &a, &b, &c);
	
	if(i==1){
		if(a > b){
			temp=a;
			a=b;
			b=temp;
		}
		
		if(b > c){
			temp = b;
			b=c;
			c=temp;
		}
		
		if(a > b){
			temp=a;
			a=b;
			b=temp;
		}
		
		printf("Ordem crescente: %f %f %f", a, b, c);
	}
	
	if(i==2){
		if(a > b){
			temp=a;
			a=b;
			b=temp;
		}
		
		if(b > c){
			temp = b;
			b=c;
			c=temp;
		}
		
		if(a > b){
			temp=a;
			a=b;
			b=temp;
		}
		
		printf("Ordem decrescente: %f %f %f", c, b, a);
	}
	
	if(i==3){
		if(a > b){
			temp=a;
			a=b;
			b=temp;
		}
		
		if(b > c){
			temp = b;
			b=c;
			c=temp;
		}
		
		if(a > b){
			temp=a;
			a=b;
			b=temp;
		}
		
		printf("Maior no meio: %f %f %f", a, c, b);
	}
}