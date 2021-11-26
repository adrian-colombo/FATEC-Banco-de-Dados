#include<stdio.h>
#include<locale.h>

/*
	5.	Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
	infantil A = 5 - 7 anos 
	infantil B = 8-10 anos 
	juvenil A = 11-13 anos 
	juvenil B = 14-17 anos 
	adulto = maiores de 18 anos 
*/

main (){
	setlocale (LC_ALL, "");
	int idade;
	
	printf ("Digite a idade do nadador: ");
	scanf ("%d",&idade);
	
	if (idade > 18){
		printf("\n\nCategoria: Adulto.");
	} else if (idade >=14 && idade <=17){
		printf("\n\nCategoria: Juvenil B.");
	} else if (idade >=11 && idade <=13){
		printf("\n\nCategoria: Juvenil A.");
	} else if (idade >=8 && idade <=10){
		printf("\n\nCategoria: Infatil B.");
	} else if (idade >=5 && idade <=7){
		printf("\n\nCategoria: Infatil A.");
	} else {
		printf("\n\nEspere por mais alguns anos...");
	}

}

