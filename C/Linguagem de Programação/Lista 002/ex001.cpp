#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define TAM 5

/*
	Fazer um programa com um registro �livro�, que cont�m os elementos t�tulo, ano de edi��o, n�mero de p�ginas e pre�o. Criar uma vari�vel desta estrutura,
	que � um vetor de 5 elementos. Ler os valores para a estrutura e imprimir a m�dia do n�mero de p�ginas dos livros.
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
		printf("Registro do %d� Livro:", i+1);
		printf("\nTitulo: ");
		gets(l[i].titulo);
		printf("Ano: ");
		scanf("%d",&l[i].ano);
		printf("N� de P�ginas: ");
		scanf("%d",&l[i].paginas);
		printf("Pre�o: R$");
		scanf("%.2f",&l[i].preco);
		system("cls");
		media += l[i].paginas;
	}

	media = media / TAM;	
	printf("A m�dia dos livros �: %.2f", media);
	
}

