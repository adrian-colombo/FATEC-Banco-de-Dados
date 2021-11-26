#include<stdio.h>
#include<locale.h>

/*
	Fazer um programa para encontrar todos os pares entre 1 e 38. 
*/

main (){
	setlocale (LC_ALL, "");
	int i, par;
	
	printf("Valores pares de 1 à 38:\n\n");
	for(i=1;i<=38;i++){
	par = i % 2;
	
	if (par == 0){
		printf("%d ",i);
	}
	}
}

