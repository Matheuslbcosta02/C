#include <stdio.h>
int main(){
	
	char s[10];
	printf("digite algo(leitura gets): \n");
	gets(s);
	fflush(stdin);
	
	puts("resultado:");
    puts(s);
	puts("");
	
	printf("digite algo(leitura fgets): \n");
	fgets(s,10,stdin);
	fflush(stdin);
	
	puts("resultado:");
	puts(s);
	
	
}
