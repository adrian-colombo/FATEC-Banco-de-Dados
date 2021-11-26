#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Crie um procedimento que receba por parâmetro dois valores reais (float) e execute a subtração do primeiro valor pelo segundo, em seguida exiba o resultado.
*/

void subtrair(float x, float y){
	printf("\n\nO resultado é: %.1f", (x-y));
}

main (){
	setlocale (LC_ALL, "");
	float a,b;
	printf("Digite o 1º Valor: ");
	scanf("%f", &a);
	printf("Digite o 2º Valor: ");
	scanf("%f", &b);
	subtrair(a,b);
}

