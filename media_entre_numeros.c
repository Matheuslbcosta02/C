#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Exerc�cio: M�dia entre n�meros

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	int A,B,C,D,soma;
	printf("insira o primeiro n�mero:\n");
	scanf("%d",&A);
	fflush(stdin);
	printf("insira o segundo n�mero:\n");
	scanf("%d",&B);
	fflush (stdin);
	printf("insira o terceiro n�mero:\n");
	scanf("%d",&C);
	fflush(stdin);
	printf ("insira o quarto n�mero:\n");
	scanf("%d",&D);
	fflush(stdin);
	soma=A+B+C+D;
	printf("A soma dos quatro n�meros inseridos:%d \n\a",soma);
	system("pause");
	return 0;
}
