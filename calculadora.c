#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//calculadora onde o usuário pode escolher a operação, entretanto só pode inserir dois números por vez.

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	int op;
	float n1,n2,res;
	
	printf("digite 1 para somar \n");
	printf("digite 2 para subtrair \n");
	printf("digite 3 para multiplicar \n");
	printf("digite 4 para dividir \n");
	scanf("%d",& op);
	
	printf("insira um número: \n");
	scanf("%f",& n1);
	printf("insira outro número: \n");
	scanf("%f",& n2);
	fflush(stdin);
	
	if(op==1){
		res=n1+n2;
		printf("resultado: %.2f",res);
	}
	
	if(op==2){
		res=n1-n2;
		printf("resultado: %.2f",res);
	}
	
	if(op==3){
		res=n1*n2;
		printf("resultado: %.2f",res);
	}
	
	if(op==4){
		if(n2==0){
			printf("divisão por zero!");
		}
		else {
			res=n1/n2;
			printf("resultado: %.2f",res);
		}
		
	}
	
	//poderia ter utilizado o switch case ai em cima!!!!!!
	
	
	
	printf("\n");
	system("pause");
	
	
	
	
	
	return 0;
	
    

	
	
	
}
