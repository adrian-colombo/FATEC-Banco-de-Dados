#include<stdio.h>
#include<locale.h>

/*
	Fa�a um algoritmo que receba o sal�rio-base de um funcion�rio, calcule e mostre o sal�rio a receber,
	sabendo-se que esse funcion�rio tem gratifica��o de 5% sobre o sal�rio-base e paga imposto de 7% sobre o total.
*/

main (){
	setlocale (LC_ALL, "");
	float salario, salario_base;
	
	printf("Digite o valor do sal�rio base: ");
	scanf("%f",&salario_base);
	
	salario = salario_base + (salario_base * 0.05);
	salario = salario - (salario * 0.07);
	
	printf("\n\nO sal�rio a receber � R$%.2f.",salario);
	
}
