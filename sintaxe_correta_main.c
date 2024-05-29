#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]){
	
setlocale(LC_ALL,"Portuguese");	
	int i;
	
	if(argc>1){
		
		printf("foram inseridos %d argumentos:",argc);
		for(i=0;i<argc;i++){
			printf ("%s\n",argv[i]);
		}
		
	} else {
		printf("não foram inseridos argumentos no programa.\n");
	}
	
	
	
	
	
	
}
