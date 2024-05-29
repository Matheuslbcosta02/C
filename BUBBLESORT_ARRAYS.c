#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(){
	
	setlocale(LC_ALL, "Portuguese");
int numeros[TAM];
int aux, i, contador;	
	
	
	printf ("entre com dez números para preencher o array:\n");
	for(i=0;i<TAM;i++){
		scanf("%d",& numeros[i]);
	}
	printf("ordem atual dos ítens no array:\n");
	for(i=0;i<TAM;i++){
		printf("%5d",numeros[i]);
	}
	
	for(contador=1;contador<TAM; contador++){
		for(i=0;i<TAM-1;i++){
			if(numeros[i]>numeros[i+1]){
				aux=numeros[i];
				numeros[i]=numeros[i+1];
				numeros[i+1]=aux;
			}
		}
		
	}
	
	printf("\n elementos do array na ordem crescente:\n");
	for(i=0;i<TAM;i++){
		printf("%5d",numeros[i]);
	}
	
	printf("\n\n");
	
	return 0;
	
}
