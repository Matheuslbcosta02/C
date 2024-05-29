#include <stdio.h>
#include <stdlib.h>

// sequência de FIBONACCI

int main(int argc, char *argv[]) {
	
int soma;
int i;
int a=0;
int b=1;
printf("Fibonacci:\n");
printf("%d\t%d\t",a,b);

for(i=3;i<9;i++){
	
	soma=a+b;
	printf("%d\t",soma);
	a=b;
	b=soma;
}
	
	printf("\n");
	system("pause");
	
	
	
	
	
	return 0;
}
