#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Crie uma fun��o que receba por par�metro um texto e esta devolva o tamanho da string.
*/

int contaTexto(char texto[]){
	int qnt;
	
	qnt = strlen(texto);
	return qnt;
}

main (){
	setlocale (LC_ALL, "");
	char texto[360];
	printf("Digite um texto: ");
	gets(texto);
	
	printf("\n\n");
	printf("O texto possui %d caracteres.", contaTexto(texto));
}

