#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Crie um procedimento que receba dois parâmetros inteiros e exiba uma mensagem
	se estes valores são iguais ou diferentes.
*/

void comparaNumeros(int x, int y){
	if (x = y){
		printf("\nValores iguais.");
	}else {
		printf("\nValores diferentes.");
	}
}

main (){
	setlocale (LC_ALL, "");
	int num_1,num_2;
	
	printf("Digite o 1º valor: ");
	scanf("%d",&num_1);
	printf("Digite o 2º valor: ");
	scanf("%d",&num_2);
	comparaNumeros(num_1,num_2);
}

