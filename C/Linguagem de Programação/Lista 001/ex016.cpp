#include<stdio.h>
#include<locale.h>

/*
	Entrar com um número inteiro positivo e exibir o fatorial deste número, lembrando que 0! = 1. Exemplo: 5! = 5x4x3x2x1 = 120
*/

main (){
	setlocale (LC_ALL, "");
	int i, num, fatorial;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
	
	if (num == 0){
		printf("0! = 1");
	} else{
		for(i=2;i<=num;i++){
		fatorial *= i;
		}
	printf("%d! = %d", num, fatorial);
	}
}

