#include<stdio.h>
#include<locale.h>

/*
	Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever uma mensagem que diga se o aluno foi ou
	não aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada.
*/

main (){
	setlocale (LC_ALL, "");
	float nota_1, nota_2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota_1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota_2);
	
	media = (nota_1 + nota_2) / 2;
	
	if (media >= 6){
		printf("\n\nO aluno foi aprovado!\nMédia: %.2f.", media);
	} else{
		printf("\n\nO aluno foi reprovado!\nMédia: %.2f.", media);
	}
	
}

