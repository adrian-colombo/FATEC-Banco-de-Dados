#include<stdio.h>
#include<locale.h>

/*
	Uma loja fornece 10% de desconto para funcion�rios e 5% de desconto para clientes vips.
	Fa�a um programa que calcule o valor total a ser pago por uma pessoa.
	O programa dever� ler o valor total da compra efetuada e um c�digo que identifique se o
	comprador � um cliente comum (1), funcion�rio (2) ou vip (3).
*/

main (){
	setlocale (LC_ALL, "");
	int classe;
	float valor, total;
	
	printf("[1] Cliente Comum\n[2] Funcion�rio\n[3] VIP\n\nDigite o c�digo apropriado: ");
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
	printf("O valor da compra � R$%.2f.", total);
	
}

