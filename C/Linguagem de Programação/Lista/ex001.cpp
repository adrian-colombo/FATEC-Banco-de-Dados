#include<stdio.h>
#include<locale.h>

/*
	Fazer um algoritmo que leia um n�mero inteiro e escreva o seu antecessor e o seu sucessor.
*/

main (){
	setlocale (LC_ALL, "");
	int num, sucessor, antecessor;
	
	printf("Digite o valor: ");
	scanf("%d",&num);

	antecessor = num-1;
	sucessor = num+1;
		
	printf("\n\nO n�mero escolhido foi %d.\nSeu antecessor � %d, e seu sucessor � %d.",num,antecessor,sucessor);
}
