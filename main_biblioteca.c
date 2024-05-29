#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblioteca.h"




int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	
	float precfabrica,percentualdistribuidor,percentualimpostos;
    float valordistribuidor, valorimpostos, valorfinal;
  
    
	
	printf("insira o preço de fábrica do veículo:\n");
	scanf("%f",& precfabrica);
	fflush(stdin);
	printf("insira o percentual do distribuidor(%%):\n");
	scanf("%f",&percentualdistribuidor);
	fflush(stdin);
	printf("insira o percentual dos impostos:(%%):\n");
	scanf("%f",&percentualimpostos);
	fflush(stdin);
	
	
	valordistribuidor = calcLucroDistribuidor( precfabrica,percentualdistribuidor);
    valorimpostos = calcImpostos( precfabrica,  percentualimpostos);
    valorfinal = calcPrecoFinal(precfabrica,  valordistribuidor, valorimpostos);
	
	printf("Valor final: R$ %f \n", valorfinal);
	printf("Valor distribuidor: R$ %f \n", valordistribuidor);
	printf("Impostos: R$ %f \n", valorimpostos);
	printf("\n");
	system("pause");
	
	
	return 0;
}
