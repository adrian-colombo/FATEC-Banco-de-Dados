#include<stdio.h>
#include<locale.h>

/*
	Exibir os números de 1 até 50 na tela. 
*/

main (){
	setlocale (LC_ALL, "");
	int i;
	
	printf("Valores de 1 à 50:\n\n");
	for(i=1;i<=50;i++){
	printf ("%d ",i);
	}
}

