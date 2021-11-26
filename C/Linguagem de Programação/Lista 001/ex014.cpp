#include<stdio.h>
#include<locale.h>
#define QNT 15
/*
	Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever (não deve ser usado vetor):
	- o maior preço lido
	- a média aritmética dos preços dos produtos

*/

main (){
	setlocale (LC_ALL, "");
	int i, codigo;
	float preco, maior=0, soma, media;
		
	for(i=1;i<=QNT;i++){
	printf("Digite o código do %dº produto: ", i);
	scanf("%d",&codigo);
	
	printf("Digite o preço do %dº produto: ", i);
	scanf("%f",&preco);
	printf("\n");

	soma += preco; 
	
	if (preco > maior){		// Calcula maior preço lido
		maior = preco;
	}
	}
	media = (soma / QNT);
	printf("\nMaior preço: R$%.2f\nMédia: R$%.2f", maior, media);
}

