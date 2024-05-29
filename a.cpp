#include <stdio.h>

int main(){
	
	#define texto "entrada e saida de dados"
	
	
	int idade = 0;
	float peso = 0.0;
	char nome[50] = "";
	float altura = 0.0;
	
	
	
	printf("%s\n", texto);
		printf("OI \n");
	
	printf("PODERIA ME AJUDAR?\n");
	printf("ESTOU FAZENDO UMA PESQUISA, E PRECISO DE ALGUNS DADOS \n");
	printf("DIGITE SUA IDADE: \n");
	scanf("%d", & idade);
	printf("DIGITE SEU PESO: \n");
	scanf("%f", & peso);
	printf("DIGITE SUA ALTURA %f. \n", altura);
	scanf("%f", & altura);
	printf("DIGITE O SEU NOME: \n");
	scanf("%s", & nome);
	
	printf("IDADE INFORMADA: %d. \n", idade);
	printf("PESO INFORMADO: %.2f. \n", peso);
	printf("ALTURA INFORMADA: %.2f. \n", altura);
	printf("SEU NOME: %s. \n", nome);
	printf("OBRIGADO PELA AJUDA \n");
	
	
	
	
	
	
	
}





