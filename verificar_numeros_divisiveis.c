#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#define text "VAMOS VERIFICAR SE OS N�MEROS S�O DIVIS�VEIS, POR GENTILEZA SEPARAR A CASAS DECIMAIS COM V�RGULA !"


//verificando se numeros s�o divisiveis

int main(int argc, char *argv[]) {

setlocale (LC_ALL,"Portuguese");
printf("\n %s",text);
float x,y ;
float resto ;

printf("\n\n\n\n insira os dois n�meros para verificarmos se eles s�o divis�veis\n\n");
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
	printf("Esses n�meros s�o divis�veis\n\n\n");
}
else{
	printf("Eles N�O s�o divis�veis :( \n\n\n)");
}

printf("%f",resto);



	return 0;
}
