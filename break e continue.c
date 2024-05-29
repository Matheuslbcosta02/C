#include <stdio.h>
#include<stdlib.h>

int main(){
	printf("testando os comandos break e continue \n");
	int a;
	
	for(a=12; a<=20; a++){
		printf("%d \n" , a);
		if(a==16){
			break;
		}
	}
	
	printf("fora do for, o programa continua \n");
	
	printf("------------------------------------------------- \n");
	printf("number par \n");
	
	int b;
	
	for(b=0; b<=12; b++){
		if(b==2){
			continue;
		}printf("%d \n", b);
		
		
	}
	
	
	
}
