#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define texto "MATRIZ COMPLETA"

//busca em matriz

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int m[3][3];
	int i,j,X;
	int achou=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	     printf("insira um número para a matriz:\t");
			scanf("%d",& m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n insira um número que você quer pesquisar na matriz: \n\t");
	scanf("%d",& X);
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if(X==m[i][j]){
		      achou=1;
		      break;
		    }
     	}
       if(achou==1){
         break;
        }
    }
	
	if(achou==1){
		printf("\n esse número %d pertence a linha %d e coluna %d da matriz m \n",X,i,j);
	}else{
		printf("\n chave não encontrada!\n");
	}
	
	
	printf("\n");
	printf("\n\n\t\t\t%s",texto);
	printf("\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", m[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
	
	
	system("pause");
	
	
	return 0;
}
