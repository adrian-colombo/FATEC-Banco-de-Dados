#include<stdio.h>
#include<locale.h>

/*
	Fazer um algoritmo que leia um número inteiro e escreva o seu antecessor e o seu sucessor.
*/

main (){
	setlocale (LC_ALL, "");
	int num, sucessor, antecessor;
	
	printf("Digite o valor: ");
	scanf("%d",&num);

	antecessor = num-1;
	sucessor = num+1;
		
	printf("\n\nO número escolhido foi %d.\nSeu antecessor é %d, e seu sucessor é %d.",num,antecessor,sucessor);
}
