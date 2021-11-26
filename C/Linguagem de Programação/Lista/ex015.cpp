#include<stdio.h>
#include<locale.h>

/*
	Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano.
	Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja maior que Chico. 
*/

main (){
	setlocale (LC_ALL, "");
	int chico=150, juca=110, tempo=1;
	
	do{
		chico = chico + 2;
		juca = juca +3 ;
		tempo++;			
	} while (juca<chico);
	
	printf("Demorará %d anos para que Juca seja maior que Chico.", tempo);
}

