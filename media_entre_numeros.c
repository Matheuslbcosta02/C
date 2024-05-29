#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Exercício: Média entre números

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	int A,B,C,D,soma;
	printf("insira o primeiro número:\n");
	scanf("%d",&A);
	fflush(stdin);
	printf("insira o segundo número:\n");
	scanf("%d",&B);
	fflush (stdin);
	printf("insira o terceiro número:\n");
	scanf("%d",&C);
	fflush(stdin);
	printf ("insira o quarto número:\n");
	scanf("%d",&D);
	fflush(stdin);
	soma=A+B+C+D;
	printf("A soma dos quatro números inseridos:%d \n\a",soma);
	system("pause");
	return 0;
}
