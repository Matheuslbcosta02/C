#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define texto "s� � permitido n�meros inteiros!"

//Fazer um progrma que receba dois n�meros e mostre o maior deles, caso sejam igual deve mostrar a mensagem "os n�meros s�o iguais."

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"Portuguese");
	printf("%s\n\n",texto);
	int A,B;
	printf("insira o primeiro n�mero:\n");
	scanf("%d",&A);
	fflush(stdin);
	printf("insira o segundo n�mero:\n");
	scanf("%d",&B);
	fflush(stdin);
	printf("\n\n");
	if(A>B){
		printf("maior n�mero:%d",A);
	}
    if(A<B){
		printf("maior n�mero:%d",B);
	}
	
	if(A==B){
		printf("os n�meros s�o iguais.");
	}
	system ("pause");
	return 0;
}
