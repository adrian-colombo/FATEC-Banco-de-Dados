#include<stdio.h>
#include<locale.h>

/*
	Fa�a um algoritmo para ler dois n�meros inteiros e informar se estes s�o iguais ou diferentes.
*/

main (){
	setlocale (LC_ALL, "");

	int num_1, num_2;
	
	printf("Digite um valor: ");
	scanf("%d",&num_1);
	
	printf("Digite outro valor: ");
	scanf("%d",&num_2);
	
	if(num_1 == num_2){
		printf("\n\nOs dois n�meros s�o iguais!");
	} else {
		printf("\n\nOs dois n�meros s�o diferentes!");
	}
}

