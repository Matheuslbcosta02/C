#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

float maior (float num1, float num2, float num3){
	
	if(num1>num2 && num1>num3){
		return num1;
	}
	else
	   if(num2>num3){
	   	return num2;
	   }
	   else
	      return num3;
}
	
	int main(){
		
		float x,y,z,m;
		printf("Insira um valor:\n");
		scanf ("%f",&x);
		fflush (stdin);
		printf ("insira um valor:\n");
		scanf ("%f",&y);
		fflush (stdin);
		printf ("insira um valor:\n");
		scanf ("%f",&z);
		
		m = maior(x,y,z);
		printf("o maior valor: %.3f \n",m);
		
		
		
	}
