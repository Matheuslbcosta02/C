#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float calcsalarioreceber(float n_hr,float s_min){
	float hr_t, s_bruto, imp, s_receber;
	hr_t= s_min/2.0;
	s_bruto= n_hr*hr_t;
	imp=s_bruto*3/100;
	s_receber=s_bruto-imp;
	return s_receber;
}





int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float horas_trab,sal_min,sal_rec;
	
	printf("insira o número de horas trabalhadas:\n");
	scanf("%f",&horas_trab);
	printf("insira o salário mínimo:\n");
	scanf("%f",&sal_min);
	
	sal_rec= calcsalarioreceber(horas_trab,sal_min);
	
	printf("salário a receber: R$ %.2f. \n",sal_rec);
	
	
	
	
	
	
	
	
	return 0;
}
