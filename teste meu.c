#include <stdio.h>
#include <stdlib.h>
int main(){

#define texto "TESTANDO IMPAR E PAR"
printf("%s \n", texto);

	int b;
	
	for(b=0; b<=20;b++){
		if(b==2 || b==4 || b==6 || b==8 || b==10||b==12||b==14|| b==16|| b==18|| b==20){
			continue;
		}
		
		printf("%d \n",b);
		
		
	}
	
	
	
	
	
}
