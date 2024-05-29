#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 50
struct tipo_pessoa{
	int idade;
	float peso;
	char nome [TAM];
};
typedef struct tipo_pessoa tipo_pessoa;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	tipo_pessoa pes={0,0.0,"teste"};
	
	printf("Início:\n");
	printf("pes.idade: %d\n",pes.idade);
	printf("pes.peso: %.2f\n",pes.peso);
	printf("pes.nome: %s\n",pes.nome);
	
	//atribuindo valores
	pes.idade=21;
	pes.peso=68.25;
	strcpy (pes.nome,"Texto");
	
	printf("\n\n alterando os dados via código: \n");
	printf("pes.idade:%d\n",pes.idade);
	printf("pes.peso:%.2f\n",pes.peso);
	printf("pes.nome: %s\n",pes.nome);
	
	//inserção via teclado
	printf("\n\n insira um número inteiro: \n");
	scanf("%d",&pes.idade);
	printf("insira um número real:\n");
	scanf("%f",&pes.peso);
	fflush(stdin);
	printf("insira uma palavra:\n");
	scanf("%s",&pes.nome);
	
	printf("\n alterando com dados do usuário:\n");
	printf("pes.idade:%d\n",pes.idade);
	printf("pes.peso:%.2f\n",pes.peso);
	printf("pes.nome:%s\n",pes.nome);
	
}



