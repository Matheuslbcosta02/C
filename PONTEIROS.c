#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int *x, valor, y ;
	valor= 35 ;
	x= &valor ;     //atribuindo o endereço de valor para x
	y= *x ;         // atribuindo o conteúdo da variável apontada por x para y
	
	
	printf("endereço da variável comum valor: %p\n",&valor);
	printf("lendo o conteúdo do ponteiro x: %p\n",x);
	printf("endereço da variável ponteiro x:%p\n",&x);
	printf("conteúdo da variável apontada por x:%d\n",*x);
	printf("conteúdo da variável comum Y: %d\n",y);
	
	return 0;
}
