#include<stdio.h>
#include<locale.h>

/*
	Faça um algoritmo que receba o salário-base de um funcionário, calcule e mostre o salário a receber,
	sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o total.
*/

main (){
	setlocale (LC_ALL, "");
	float salario, salario_base;
	
	printf("Digite o valor do salário base: ");
	scanf("%f",&salario_base);
	
	salario = salario_base + (salario_base * 0.05);
	salario = salario - (salario * 0.07);
	
	printf("\n\nO salário a receber é R$%.2f.",salario);
	
}
