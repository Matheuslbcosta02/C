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
	
	printf("endereço de a: %p\n",&a);
	printf("endereço pont1: %p\n",&pont1);
	printf("endereço pont2: %p\n",&pont2);
	printf("endereço apontado por pont1: %p\n",pont1);
	printf("endereço apontado por pont2: %p\n", pont2);
	printf("valor de a: %d\n",**pont2);
	
	return 0;
	
	
	
}
