#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Crie um procedimento que receba por par�metro dois valores reais (float) e execute a subtra��o do primeiro valor pelo segundo, em seguida exiba o resultado.
*/

void subtrair(float x, float y){
	printf("\n\nO resultado �: %.1f", (x-y));
}

main (){
	setlocale (LC_ALL, "");
	float a,b;
	printf("Digite o 1� Valor: ");
	scanf("%f", &a);
	printf("Digite o 2� Valor: ");
	scanf("%f", &b);
	subtrair(a,b);
}

