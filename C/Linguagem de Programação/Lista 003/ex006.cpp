#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<stdlib.h.>

/*
	Criar um programa com um vetor de inteiros com 100 posições e global.
	Criar um procedimento para preencher este vetor com números aleatórios (rand) e outro procedimento que exibirá todos os valores acima de 80.
*/
int vetor[100];

void preencheVetor(){
	int i;
	
	for(i=0;i<100;i++){
		vetor[i] = rand();
	}
}

void exibeVetor(){
	int i;
	
	for(i=0;i<100;i++){
		if(vetor[i] > 80){
			printf("[%d] ", vetor[i]);
		}
	}
}

main (){
	setlocale (LC_ALL, "");
	preencheVetor();
	exibeVetor();
}

