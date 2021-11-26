		/* Faça um algoritmo que calcule e imprima quantos anos serão necessário para que Maria seja maior do
		que Ana, sabendo que Ana tem 1.40 m e cresce 2 cm por ano, enquanto Maria tem 1,00 m e cresce 3 cm
		por ano. */
		
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	int ana=140, maria=100, ano=0;
	
	while (maria < ana){
		maria +=3;
		ana +=2;
		ano++;
	}	
	
	cout << "Demorará " << ano << " anos para que Maria seja maior que Ana.";
}
