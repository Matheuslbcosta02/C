#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct funcionario{
	float salario;
	float percentual;
};

typedef struct funcionario funcionario;


//Exerc�cio: Aumento de sal�rio

int main(int argc, char *argv[]) {
	
    setlocale(LC_ALL,"Portuguese");	
	funcionario fun={0.0,0.0};
    printf("Ol� funcion�rio! :) \n");
	printf("Por gentileza, informe o seu sal�rio: \n");
	scanf("%f",&fun.salario);
	fflush(stdin);
	printf("Agora por favor, insira o seu percentual de aumento de sal�rio:  %% \n");
	scanf("%f",&fun.percentual);
	fflush(stdin);
	
	float aumento;
	float novo_salario;

    aumento= fun.salario*(fun.percentual/100);	 
	novo_salario= fun.salario+aumento;
	
	printf("Abaixo segue o seu aumento, e o seu novo sal�rio: \n \t\t\t %.2f------- %.2f",aumento,novo_salario);
	printf("\n\n");
	system ("pause");
	
	return 0;
}
