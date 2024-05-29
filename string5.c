#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 50
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	char s[N];
	int i;
	
	printf("Digite um texto:\n");
	gets(s);
	i=strlen(s);
	printf("\n tamanho do texto:%d \n\n",i);
	printf("impressão de posição a posição: \n");
	for(i=0;i<strlen(s);i++){
		printf("%c",s[i]);
	}
	
	
}

