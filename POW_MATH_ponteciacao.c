#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main(){
	setlocale (LC_ALL,"Portuguese");
	
	int x,y,z;
	printf("insira um valor X para ser elevado por um valor Y\n\n ");
	scanf ("%d",&x);
	printf("Agora insira o valor Y que ir� elevar o n�mero que voc� escolher anteriormente\n\n");
	scanf("%d",&y);
	
	z= pow(x,y);
	
	printf("o n�mero %d elevado por %d � igual a: %d",x,y,z);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}
