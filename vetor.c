#include <stdio.h>
int main(){
	
	int Vetor[5]={10, 20, 30, 40, 50};
	int indice;
	float soma=0;
	
	for(indice=0;indice<5;indice++){
		soma+=Vetor[indice];
	}
	printf("resultado: %.2f \n",soma/5);
	
	
}
