#include <stdio.h>
int main(){
	float m;
	#define texto "Notas variam de 0 a 10"
	printf("%s \n", texto);
	printf("Oi, insira sua nota: \n");
	scanf ("%f",& m);
	if (m>=7.0){
		printf("Aprovado(a)! :) \n");
	}
	if(m<4.0){
		printf("Reprovado(a)! :( \n");
	}
	if(m>=4.0 && m<7.0){
		printf("Reprovado(a), mas tem direito a exame! \n");
	}
	printf("Tchau '-' \n");
	
	
	
	
}
