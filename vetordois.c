#include <stdio.h>
int main(){
	
	int V[5];
	int i;
	
	for(i=0; i<5 ; i++){
		printf("Insira um valor inteiro: \n");
		scanf("%d",& V[i]);
		
	}
	
	printf("Dados inseridos: \n");
	for(i=0; i<5;i++){
		printf("%d \t",V[i]);
		
	}
	
	
	
}
