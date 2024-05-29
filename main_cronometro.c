#include <stdio.h>
#include <stdlib.h>
#include "cronometro.h"
#include<locale.h>

//desenvolver um algoritmo que recebe o tempo cronometrado, em segundos, e diga
// quantas horas, minutos e segundos se passaram a partir do tempo cronometrado.

int main(int argc, char *argv[]) {
	int h,m,s;
	
	setlocale(LC_ALL,"Portuguese");
	
printf("Insira o tempo do cronômetro em segundos:\n");
scanf("%d",&s);

h=s/3600;
s=s-(3600*h);

m=s/60;
s=s-(60*m);

printf("Horas:%d\n\n",h);
printf("Minutos:%d\n\n",m);
printf("Segundos:%d\n\n",s);
	
	system("pause");
	return 0;
}
