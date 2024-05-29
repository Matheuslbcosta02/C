#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 50
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	char hardtext[N]={"igual"};
	char senha_user[N];
	int ok;
	
	printf("digite um texto:\n");
	gets(senha_user);
	fflush(stdin);
	
	ok=strcmp(hardtext,senha_user);
	if(ok==0){
		printf("textos iguais\n");
	}
	else{
		printf("textos diferentes\n");
	}
	
	
}







