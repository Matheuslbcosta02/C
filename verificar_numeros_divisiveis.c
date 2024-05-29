#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#define text "VAMOS VERIFICAR SE OS NÚMEROS SÃO DIVISÍVEIS, POR GENTILEZA SEPARAR A CASAS DECIMAIS COM VÍRGULA !"


//verificando se numeros são divisiveis

int main(int argc, char *argv[]) {

setlocale (LC_ALL,"Portuguese");
printf("\n %s",text);
float x,y ;
float resto ;

printf("\n\n\n\n insira os dois números para verificarmos se eles são divisíveis\n\n");
scanf("%f",&x);
printf("\n\n");
scanf("%f", &y);

if (x>=y){

	resto = fmod(x,y) ;
}
else{

	resto= fmod(y,x) ;
}

if(resto==0.0){
	printf("Esses números são divisíveis\n\n\n");
}
else{
	printf("Eles NÃO são divisíveis :( \n\n\n)");
}

printf("%f",resto);



	return 0;
}
