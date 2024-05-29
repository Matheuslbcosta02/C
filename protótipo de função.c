// protótipo de função  ==> bom para organizar

#include <stdio.h>
float maior(float num1,float num2);    //protótipo
int main(){
	
	float x,y,m;
	printf("insira um valor:\n");
	scanf("%f",&x);
	fflush(stdin);
	printf("insira outro valor:\n");
	scanf("%f",&y);
	fflush(stdin);
	
	m= maior(x,y);
	printf("%.2f maior valor:\n",m);
}

float maior(float num1,float num2){
	if(num1>num2){
	  return num1;
	}
	else
	  return num2;
}





