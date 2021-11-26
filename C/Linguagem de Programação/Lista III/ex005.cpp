#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Faça um procedimento para verificar se um ano é bissexto ou não.
	Utilize a regra: um ano bissexto é divisível por 4, mas não por 100, ou então se é divisível por 400.
	Exemplo: 1988 é bissexto, pois é divisível por 4 e não é por 100; 2000 é bissexto porque é divisível por 400. O ano deve ser recebido por parâmetro.
*/

void anoBissexto(int ano){
	if(ano%4==0 && (ano%100!=0 || ano%400==0)){
		printf("O ano é bissexto.");
	} else {
		printf("O ano não é bissexto.");
	}
}

main (){
	setlocale (LC_ALL, "");
	int ano;
	printf("Digite o ano: ");
	scanf("%d",&ano);
	anoBissexto(ano);
}

