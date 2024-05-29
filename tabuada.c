#include <stdio.h>
#include <stdlib.h>
#define texto "TABUADA"
//tabuada

int main(int argc, char *argv[]) {
	printf("%s",texto);
	int a;
	int b;
	int res;
	
for(a=1;a<11;a++){
	printf("\n\n");
	for(b=1;b<11;b++){
		res=a*b;
		printf("%dX%d=%d\n",a,b,res);
	}
}
	
	
	system("pause");
	
	
	return 0;
}
