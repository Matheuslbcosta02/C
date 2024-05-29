#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 3

struct tipo_pessoa{
	
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	tipo_pessoa lista [TAM];
	int i;
	for(i=0;i<3;i++){
		
		printf("insira os dados(%d):",i+1);
		puts("Nome:");
		scanf("%50[^\n]s",&lista[i].nome);
		fflush(stdin);
		puts("idade:");
		scanf("%d",&lista[i].idade);
		fflush(stdin);
		puts("Peso:");
		scanf("%f",& lista[i].peso);
		fflush(stdin);
	}
	system("cls");
	puts("seus dados:\n");
	for(i=0;i<3;i++){
		printf("-----------pessoa%d----------------\n",i+1);
		printf("\t nome:%s\n",lista[i].nome);		
		printf("\t idade:%d\n",lista[i].idade);
		printf("\t nome:%.2f\n",lista[i].peso);
		
	}
	
	printf("--------------------\n");
	
	
	
	
}









