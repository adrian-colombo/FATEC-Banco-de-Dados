#include<stdio.h>
#include<locale.h>

/*
	Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
	a) a idade atual dessa pessoa.
	b) quantos anos ela terá em 2038.
*/

main (){
	setlocale (LC_ALL, "");
	int ano_nascimento, ano_atual;
	int idade,previsao;
	
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano_nascimento);
	
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	
	idade = ano_atual - ano_nascimento;
	previsao = 2038 - ano_nascimento;
	
	printf("\n\nEssa pessoa possui %d anos.\nEm 2038 ela terá %d anos.", idade, previsao);
}

