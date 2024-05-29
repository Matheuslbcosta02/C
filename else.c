#include <stdio.h>
int main(){
	
	#define texto "NOTAS DA ESCOLA"
	float m;
	printf("%s \n",texto);
	printf("coloque a  nota: \n");
	scanf("%f",& m);
	if (m>=7.0){
		printf("Aprovado(a)! \n");
	}
	else{
		printf("Reprovado(a)! \n");
	}
	
	
	
	
	
}
