#include<stdio.h>
#include<locale.h>
#define QNT 15
/*
	Fa�a um algoritmo para ler o c�digo e o pre�o de 15 produtos, calcular e escrever (n�o deve ser usado vetor):
	- o maior pre�o lido
	- a m�dia aritm�tica dos pre�os dos produtos

*/

main (){
	setlocale (LC_ALL, "");
	int i, codigo;
	float preco, maior=0, soma, media;
		
	for(i=1;i<=QNT;i++){
	printf("Digite o c�digo do %d� produto: ", i);
	scanf("%d",&codigo);
	
	printf("Digite o pre�o do %d� produto: ", i);
	scanf("%f",&preco);
	printf("\n");

	soma += preco; 
	
	if (preco > maior){		// Calcula maior pre�o lido
		maior = preco;
	}
	}
	media = (soma / QNT);
	printf("\nMaior pre�o: R$%.2f\nM�dia: R$%.2f", maior, media);
}

