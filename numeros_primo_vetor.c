#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// n�meros primos em um vetor.
int main(int argc, char *argv[]){
	
	setlocale(LC_ALL,"Portuguese");
	
	int vet[9];
	int i,j,cont;
	
	for(i=0;i<9;i++){
		printf("insira um n�mero inteiro:\n");
		scanf("%d",& vet[i]);
	}
	
	
	for(i=0;i<9;i++){
		cont=0;
		for(j=1;j<=vet[i];j++){
			if(vet[i]%j==0){
				cont++;
			}
		}
	  if(cont==2){
		printf("esse n�mero %d � primo! posi��o: %d \n",vet[i],i);
	  }else{
	  	printf("esse n�mero %d N�O � primo.\n",vet[i]);
	  }
	  printf("\n");
	}
	
	
	
	
	
	printf("\n");
	
	system("pause");
	return 0;
}
	

