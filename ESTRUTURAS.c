#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct livro{
char nome[50];
char autor[30];
int paginas;
float preco;
};

struct livro livro1;
int main(){
	setlocale (LC_ALL,"portuguese");
	
	
	printf("cadastrando livro:\n");
	printf("digite o nome do livro:\n");
	fgets (livro1.nome,50,stdin);
	printf("autor:\n");
	fgets (livro1.autor,30,stdin);
	printf("número de páginas:\n");
	scanf("%d",&livro1.paginas);
	printf("digite o preço do livro:\n");
	scanf("%f",&livro1.preco);
	
	printf(" o livro %s possui %d páginas e custa R$ %5.2f\n", livro1.nome,livro1.paginas,livro1.preco  );
	
	return 0;
}



