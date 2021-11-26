#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Criar uma struct “cliente” com codigo, nome e rg. Declare uma variável global do tipo cliente.
	Crie um procedimento para preencher os dados do cliente e outro procedimento para exibir os dados do cliente.
	Crie, no main, um menu para o usuário poder optar por: sair, cadastrar e exibir.
*/

struct cliente{
	int codigo;
	int rg;
	char nome[];
};

struct cliente dadosClientes;

void preencheCliente(){
	system("cls");
	printf("Cadastro do Cliente:\n\n");
	printf("Digite o código: ");
	scanf("%d",&dadosClientes.codigo);
	printf("Digite o RG: ");
	scanf("%d",&dadosClientes.rg);
	fflush(stdin);
	printf("Digite o nome: ");
	gets(dadosClientes.nome);
	system("cls");
}

void exibeCliente(){
	system("cls");
	printf("Código: %d\nNome: %s\nRG: %d\n\n", dadosClientes.codigo, dadosClientes.nome, dadosClientes.rg);
	system("pause");
	system("cls");
}


main (){
	setlocale (LC_ALL, "");
	int op;
	
	do{
	printf("0. Sair\n1.Cadastrar\n2.Exibir");
	printf("\n\nEscolha a opção: ");
	scanf("%d",&op);
	
		switch (op){
			case 1:
				preencheCliente();
				break;
			case 2:
				exibeCliente();
				break;
		}
	} while(op!=0);
}

