#include <stdio.h>
int main(){
	
	char nome[20];
	
	printf("insira seu nome:\n");
	scanf("%19[^\n]s",nome);

	
	printf("nome: %s",nome);
	
	
}
