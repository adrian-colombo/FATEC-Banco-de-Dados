#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define TAM 5

/*
	Fazer um programa com um registro “livro”, que contém os elementos título, ano de edição, número de páginas e preço. Criar uma variável desta estrutura,
	que é um vetor de 5 elementos. Ler os valores para a estrutura e imprimir a média do número de páginas dos livros.
*/

struct livro{
	char titulo [40];
	int ano;
	int paginas;
	float preco;
	
};

main (){
	setlocale (LC_ALL, "");
	livro l[TAM];
	int i;
	float media;
	
	for(i=0;i<TAM;i++){
		fflush(stdin);
		printf("Registro do %dº Livro:", i+1);
		printf("\nTitulo: ");
		gets(l[i].titulo);
		printf("Ano: ");
		scanf("%d",&l[i].ano);
		printf("Nº de Páginas: ");
		scanf("%d",&l[i].paginas);
		printf("Preço: R$");
		scanf("%.2f",&l[i].preco);
		system("cls");
		media += l[i].paginas;
	}

	media = media / TAM;	
	printf("A média dos livros é: %.2f", media);
	
}

