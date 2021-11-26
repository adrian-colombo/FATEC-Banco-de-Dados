#include<stdio.h>
#include<locale.h>

/*
	Um posto est� vendendo combust�veis com a seguinte tabela de descontos: *IMAGEM*
	Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de combust�vel (codificado da seguinte forma: 1-�lcool, 2-gasolina),
	calcule e imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da gasolina � R$ 3,30 e o pre�o do litro do �lcool � R$ 2,90.
*/

main (){
	setlocale (LC_ALL, "");
	int combustivel;
	float litros, total;
	
	printf("[1] �lcool\n[2] Gasolina\nDigite o c�digo do combust�vel: ");
	scanf("%d",&combustivel);
	
	printf("Digite o valor em litros: ");
	scanf("%f",&litros);
	
	if (combustivel == 1){							// Alcool
		if (litros > 20){
			total = (litros * 2.90) * 0.95;
		} else {
			total = (litros * 2.90) * 0.97;
		}
		printf ("%.2f litros de alcool custa R$%.2f.", litros, total);
	} else if (combustivel == 2){					// Gasolina
		if (litros > 20){
			total = (litros * 3.30) * 0.96;
		} else {
			total = (litros * 3.30) * 0.94;
		}
		printf ("%.2f litros de gasolina custa R$%.2f.", litros, total);
	}
}

