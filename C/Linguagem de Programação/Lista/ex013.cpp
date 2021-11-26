#include<stdio.h>
#include<locale.h>

/*
	Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo os valores lidos na soma).
	Considere que o segundo valor lido será sempre maior que o primeiro valor lido. 
*/

main (){
	setlocale (LC_ALL, "");
	int i, num_1, num_2, soma=0;
	
	printf("O segundo valor deve ser maior que o primeiro valor!\n");
	printf("Digite o primeiro valor: ");
	scanf("%d",&num_1);
	
	do{
	printf("Digite o segundo valor: ");
	scanf("%d",&num_2);
	} while(num_2 < num_1);

	for(i=num_1;i<=num_2;i++){
		soma+= i;
	}
	printf ("\n\nA soma dos números entre %d à %d é igual a %d.", num_1, num_2, soma);
}

