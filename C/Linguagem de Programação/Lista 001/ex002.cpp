#include<stdio.h>
#include<locale.h>

/*
	Ler uma medida em polegadas e imprimir a equivalente em centímetros, sabendo que 2.54 cm equivale a 1 polegada.
*/

main (){
	setlocale (LC_ALL, "");
	float polegadas, centimetros;
	
	printf("Digite o valor em polegadas: ");
	scanf("%f",&polegadas);

	centimetros = polegadas * 2.54;
	
	printf("\n\n%.2fpol é igual a %.2fcm.",polegadas,centimetros);
}
