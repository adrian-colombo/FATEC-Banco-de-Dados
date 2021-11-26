#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<string.h>
#define TAM 10

/*
	Desenvolver um programa, em linguagem C, para armazenar dados de 10 ve�culos.
	A struct deve conter os seguintes campos: placa, modelo, marca e valor.
	Declarar um vetor global para armazenar os 10 ve�culos.
*/

struct veiculos{
	char placa[7];
	char modelo[30];
	char marca[30];
	float valor;
};

struct veiculos dadosVeiculos[TAM];
int i;

void preencheVeiculos(){
	for(i=0;i<TAM;i++){
		printf("Registro do %d� Ve�culo:", i+1);
		printf("\nPlaca: ");
		fflush(stdin);
		gets(dadosVeiculos[i].placa);
		printf("Modelo: ");
		gets(dadosVeiculos[i].modelo);
		printf("Marca: ");
		gets(dadosVeiculos[i].marca);
		printf("Valor: ");
		scanf("%f",&dadosVeiculos[i].valor);
		system("cls");
	}
}

void exibeVeiculos(){
	for(i=0;i<TAM;i++){
		printf("%d - Ve�culo",i+1);
		printf("\nPlaca: %s\nModelo: %s\nMarca: %s\nValor: R%.2f\n\n",dadosVeiculos[i].placa, dadosVeiculos[i].modelo,dadosVeiculos[i].marca, dadosVeiculos[i].valor);
	}
}

float exibeMenorValor(){
	float menorValor;
	
menorValor = dadosVeiculos[0].valor;
	for (i=1;i<TAM;i++){
		if (dadosVeiculos[i].valor < menorValor){
			menorValor = dadosVeiculos[i].valor;
		}
	}
	return menorValor;
}

void exibeVeiculoPlaca(char placa[]){
	int j=-1;

	for(i=0;i<TAM;i++){
		if (strcmp (dadosVeiculos[i].placa,placa) == 0){
			j = i;
		} 
	}
	
	if (j!=-1){
			printf("\nModelo: %s\nMarca: %s\nValor: R%.2f\n\n", dadosVeiculos[j].modelo,dadosVeiculos[j].marca, dadosVeiculos[j].valor);
		} else {
			printf("Placa n�o identificada.\n");
	}
	
	}

main (){
	setlocale (LC_ALL, "");
	int op;
	char procurePlaca[7];

	
	do{
	printf("1. Preencher Ve�culos\n2. Exibir Ve�culos\n3. Ve�culo mais barato\n4. Selecionar ve�culo por placa\n0.Sair");
	printf("\n\nEscolha uma op��o: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			system("cls");
			preencheVeiculos();
			break;
		
		case 2:
			system("cls");
			exibeVeiculos();
			system("pause");
			system("cls");
			break;
			
		case 3:
			system("cls");
			printf("O ve�culo com menor valor custa R$%.2f.\n\n", exibeMenorValor());
			system("pause");
			system("cls");
			break;
			
		case 4:
			system("cls");
			printf("Digite a placa: ");
			fflush(stdin);
			gets(procurePlaca);
			exibeVeiculoPlaca(procurePlaca);
			system("pause");
			system("cls");
			break;
			
	}
	} while(op!=0);
}

