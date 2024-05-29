#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 20
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char origem[N]={"Olá mundo!"};
	char destino[N];
	
	printf("antes do strcpy: \n");
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	printf("depois do strcpy:\n");
	puts(origem);
	puts(destino);
	
	
	
	
	
	
	
	
	
}
