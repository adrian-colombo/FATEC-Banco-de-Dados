#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<stdlib.h.>

/*
	Crie uma fun��o em linguagem C chamado Dado() que retorna, atrav�s de sorteio (rand), um n�mero de 1 at� 6.
*/

int dado(){
	return 1 + rand()%6;
}

main (){
	setlocale (LC_ALL, "");
	printf("O dado caiu na face %d.", dado());
}

