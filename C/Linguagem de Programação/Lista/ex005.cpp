#include<stdio.h>
#include<locale.h>

/*
	Faça um algoritmo para ler dois números inteiros e informar se estes são iguais ou diferentes.
*/

main (){
	setlocale (LC_ALL, "");

	int num_1, num_2;
	
	printf("Digite um valor: ");
	scanf("%d",&num_1);
	
	printf("Digite outro valor: ");
	scanf("%d",&num_2);
	
	if(num_1 == num_2){
		printf("\n\nOs dois números são iguais!");
	} else {
		printf("\n\nOs dois números são diferentes!");
	}
}

