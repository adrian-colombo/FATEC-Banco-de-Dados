#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<stdlib.h.>

/*
	Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio (rand), um número de 1 até 6.
*/

int dado(){
	return 1 + rand()%6;
}

main (){
	setlocale (LC_ALL, "");
	printf("O dado caiu na face %d.", dado());
}

