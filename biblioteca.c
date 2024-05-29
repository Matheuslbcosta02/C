#include "biblioteca.h"

float calcLucroDistribuidor(float precfabrica,float percentualdistribuidor){
float precofabrica,percdistribuidor,valordodistribuidor;
valordodistribuidor= precofabrica*percdistribuidor;

	return valordodistribuidor;
}

float calcImpostos(float precfabrica, float percentualimpostos){
float precofabrica,percimpostos,valordosimpostos;
valordosimpostos= precofabrica * percimpostos/100;
	return valordosimpostos;
} 

float calcPrecoFinal(float precfabrica, float valordistribuidor, float valorimpostos){
	float precofabrica,valordodistribuidor,valordosimpostos,valorfinal;
	valorfinal= precofabrica + valordodistribuidor + valordosimpostos;
	return valorfinal;
}













