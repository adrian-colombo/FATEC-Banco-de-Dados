#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define TAM 30

/*
	Fa�a um algoritmo que leia um vetor K[30] de n�meros inteiros. Em seguida, troque
	todos os elementos �mpares do vetor por 0;
*/

main (){
	setlocale (LC_ALL, "");
	int k[TAM], i;
	
	for(i=0;i<TAM;i++){
		printf("Digite os valores: ");
		scanf("%d",&k[i]);
	}
	
	for (i=0;i<TAM;i++){
		if (k[i]%2==1){
			k[i] = 0;
		}
	}
	
	printf("\n\n");
	for (i=0;i<TAM;i++){
		printf("%d ",k[i]);
	}

}

