#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#define TAM 100

struct dados{
		char nome[TAM];
		int idade;
		float peso;
		float altura;
	};

int main(int argc, char*argv[]){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct dados d [3];
	
	
	int i;
	
	for(i=0;i<3;i++){
		printf("\n\n");
		printf("olá usuário %d insira o seu nome:\t\n",i);
		scanf("%99[^\n]s",& d[i].nome);
		fflush(stdin);
		printf("usuário %d insira sua idade:\t\n",i);
		scanf("%d",& d[i].idade);
		fflush(stdin);
		printf("usuário %d insira seu peso: \t\n",i);
		scanf("%f",& d[i].peso);
		fflush(stdin);
		printf("usuário %d insira sua altura:\t\n",i);
		scanf("%f",& d[i].altura);
		fflush(stdin);
	}
	
	printf("\n\n\n");
	printf("nome do primeiro: %s\n\n",d[0].nome);
	printf("idade do primeiro: %d\n\n",d[0].idade);
	printf("peso do último: %.2f\n\n",d[2].peso);
	printf ("altura do último: %.2f\n\n",d[2].altura);
	
	
	
	
	
	system("pause");
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}





































