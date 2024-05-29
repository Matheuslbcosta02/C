#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// números primos em um vetor.
int main(int argc, char *argv[]){
	
	setlocale(LC_ALL,"Portuguese");
	
	int vet[9];
	int i,j,cont;
	
	for(i=0;i<9;i++){
		printf("insira um número inteiro:\n");
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
		printf("esse número %d é primo! posição: %d \n",vet[i],i);
	  }else{
	  	printf("esse número %d NÃO é primo.\n",vet[i]);
	  }
	  printf("\n");
	}
	
	
	
	
	
	printf("\n");
	
	system("pause");
	return 0;
}
	

