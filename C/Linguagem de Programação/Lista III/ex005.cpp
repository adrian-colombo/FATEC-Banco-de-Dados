#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Fa�a um procedimento para verificar se um ano � bissexto ou n�o.
	Utilize a regra: um ano bissexto � divis�vel por 4, mas n�o por 100, ou ent�o se � divis�vel por 400.
	Exemplo: 1988 � bissexto, pois � divis�vel por 4 e n�o � por 100; 2000 � bissexto porque � divis�vel por 400. O ano deve ser recebido por par�metro.
*/

void anoBissexto(int ano){
	if(ano%4==0 && (ano%100!=0 || ano%400==0)){
		printf("O ano � bissexto.");
	} else {
		printf("O ano n�o � bissexto.");
	}
}

main (){
	setlocale (LC_ALL, "");
	int ano;
	printf("Digite o ano: ");
	scanf("%d",&ano);
	anoBissexto(ano);
}

