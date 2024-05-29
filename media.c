#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float trab, aval, exam, med;
	
	printf("insira a nota do trabalho: \n");
	scanf("%f",& trab);
	printf("insira a nota da avaliacao: \n");
	scanf("%f",& aval);
	printf("insira a nota do exame: \n");
	scanf("%f",& exam);
	
	med=(trab*2 + aval*3 + exam*5)/10 ;
	printf("media final: %.2f \n",med);
	
  if(med>=8,0 && med<=10,0){
  	if(med>=8,0){
  		printf("A \n");
	  }else{
	  	if(med>=7,0){
	  		printf("B \n");
		  }else{
		  	if(med>=6,0){
		  		printf("C \n");
			  }else{
			  	if(med>=5,0){
			  		printf("D \n");
				  }else{
				  	if(med>=0,0){
				  		printf("E \n");
					  }
				  }
			  }
		  }
	  }
  }	
	
	system ("pause");
	
	return 0;
}
