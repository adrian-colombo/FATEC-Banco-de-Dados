#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include <string.h>
#define LIM 8

/*
	Crie uma estrutura para definir um produto contendo nome, peso e preco.
	Definir uma vari�vel global para armazenar 8 produtos, um procedimento para preencher os dados dos produtos,
	uma fun��o para calcular a m�dia de pre�os, uma fun��o para calcular o produto mais leve.
	Deve existir um menu para acessar as funcionalidades do programa.
*/

struct produto{
	char nome[80];
	float peso;
	float preco;
};
struct produto dadosProdutos[LIM];
int i;

void preencheProdutos(){
	for(i=0;i<LIM;i++){
	printf("Cadastro do %d� Produto:\n\n", i+1);
	printf("Digite o nome: ");
	fflush(stdin);
	gets(dadosProdutos[i].nome);
	printf("Digite o peso (em kg): ");
	scanf("%f",&dadosProdutos[i].peso);
	printf("Digite o pre�o: R$");
	scanf("%f",&dadosProdutos[i].preco);
	system("cls");
}
}

float mediaPrecos(){
	float media_preco;
	for (i=0;i<LIM;i++){
	media_preco += dadosProdutos[i].preco;
}
	media_preco = media_preco / LIM;
	return media_preco;	
}

int menorPeso(){
	int i_produto=0;
	float menor_peso;
	menor_peso = dadosProdutos[0].peso;
	for (i=1;i<LIM;i++){
		if (dadosProdutos[i].peso < menor_peso){
			menor_peso = dadosProdutos[i].peso;
			i_produto = i; 
		}
	}
	return i_produto;
}

main (){
	setlocale (LC_ALL, "");
	int op;
	preencheProdutos();
	do{
	printf("Menu:\n0. Sair\n1. Calcular M�dia do Pre�o\n2. Calcular produto mais leve\n\nOp��o: ");
	scanf("%d",&op);
	
		switch (op){
			case 1:
				system(("cls"));
				printf("A m�dia dos pre�os � R$%.2f\n\n", mediaPrecos());
				system("pause");
				system(("cls"));
				break;
			case 2:
				system(("cls"));
				printf("\nO produto com menor peso � %s (%.2fkg).\n\n", dadosProdutos[menorPeso()].nome, dadosProdutos[menorPeso()].peso);
				system("pause");
				system(("cls"));
				break;
		}
	} while(op!=0);
	
	}

