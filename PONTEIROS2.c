#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a=40;
	int *pont1;
	int **pont2;
	pont1=&a;
	pont2=&pont1;
	
	printf("endere�o de a: %p\n",&a);
	printf("endere�o pont1: %p\n",&pont1);
	printf("endere�o pont2: %p\n",&pont2);
	printf("endere�o apontado por pont1: %p\n",pont1);
	printf("endere�o apontado por pont2: %p\n", pont2);
	printf("valor de a: %d\n",**pont2);
	
	return 0;
	
	
	
}
