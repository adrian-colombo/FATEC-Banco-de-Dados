#include<stdio.h>
#include<locale.h>

/*
	2.	As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$ 1,00 se forem compradas pelo menos 12.
	Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva o custo total da compra.
*/

main (){
	setlocale (LC_ALL, "");
	int qnt_maca;
	float preco;
	
	printf("Digite a quantidade de ma��s que deseja comprar: ");
	scanf("%d",&qnt_maca);
	
	if (qnt_maca < 12){
		preco = qnt_maca * 1.30;
	} else {
		preco = qnt_maca * 1.00;
	}
	
	printf("\n\n%d ma��s custa R$%.2f.", qnt_maca, preco);
	
	
}

