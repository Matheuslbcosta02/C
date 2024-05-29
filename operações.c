#include <stdio.h>
int main(){
	
	int A,B,soma,sub,mult,divis;
	printf("Digite o primeiro valor: \n");
	scanf("%d",& A);
	printf("Digite o segundo valor: \n");
	scanf("%d",& B);
	soma = A+B;
	sub = A-B;
	mult = A*B;
	divis = A/B;
	printf("resultados: \n");
	printf("Soma: %d \n",soma);
	printf("subtra.: %d \n",sub);
	printf("multiplic.: %d \n", mult);
	printf("divis.: %d \n",divis);
	
	int dado = 10;
	
	printf("dado: %d \n",dado);
	dado ++;
	printf("dadonow: %d \n",dado);
	dado--;
	printf("dadonow: %d \n",dado);
	dado+=3;
	printf("dadonow: %d \n",dado);
	dado-=2;
    printf("dadonow: %d \n",dado);
    dado*=10;
printf("dadonow: %d \n",dado);



}

