#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int *x, valor, y ;
	valor= 35 ;
	x= &valor ;     //atribuindo o endere�o de valor para x
	y= *x ;         // atribuindo o conte�do da vari�vel apontada por x para y
	
	
	printf("endere�o da vari�vel comum valor: %p\n",&valor);
	printf("lendo o conte�do do ponteiro x: %p\n",x);
	printf("endere�o da vari�vel ponteiro x:%p\n",&x);
	printf("conte�do da vari�vel apontada por x:%d\n",*x);
	printf("conte�do da vari�vel comum Y: %d\n",y);
	
	return 0;
}
