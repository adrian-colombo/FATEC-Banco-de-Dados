#include<stdio.h>
#include<locale.h>

/*
	Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips.
	Faça um programa que calcule o valor total a ser pago por uma pessoa.
	O programa deverá ler o valor total da compra efetuada e um código que identifique se o
	comprador é um cliente comum (1), funcionário (2) ou vip (3).
*/

main (){
	setlocale (LC_ALL, "");
	int classe;
	float valor, total;
	
	printf("[1] Cliente Comum\n[2] Funcionário\n[3] VIP\n\nDigite o código apropriado: ");
	scanf ("%d",&classe);
	
	printf("Digite o valor total da compra: ");
	scanf("%f",&valor);
	
	switch (classe){
		case 1:
			total = valor;
			break;
		case 2:
			total = valor * 0.90;
			break;
		case 3:
			total = valor * 0.95;
		break;
				
	}
	printf("O valor da compra é R$%.2f.", total);
	
}

