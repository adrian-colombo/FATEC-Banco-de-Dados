#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Faça um procedimento que recebe a idade de um nadador por parâmetro e exiba a categoria desse nadador de acordo com a tabela abaixo:
*/

void identificaIdade(int idade){
	if (idade >= 18){
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
	
main (){
	setlocale (LC_ALL, "");
	int idade;
	printf("Digite a idade do nadador: ");
	scanf("%d",&idade);
	identificaIdade(idade);
}

