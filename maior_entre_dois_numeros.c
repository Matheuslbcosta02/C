#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define texto "só é permitido números inteiros!"

//Fazer um progrma que receba dois números e mostre o maior deles, caso sejam igual deve mostrar a mensagem "os números são iguais."

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"Portuguese");
	printf("%s\n\n",texto);
	int A,B;
	printf("insira o primeiro número:\n");
	scanf("%d",&A);
	fflush(stdin);
	printf("insira o segundo número:\n");
	scanf("%d",&B);
	fflush(stdin);
	printf("\n\n");
	if(A>B){
		printf("maior número:%d",A);
	}
    if(A<B){
		printf("maior número:%d",B);
	}
	
	if(A==B){
		printf("os números são iguais.");
	}
	system ("pause");
	return 0;
}
