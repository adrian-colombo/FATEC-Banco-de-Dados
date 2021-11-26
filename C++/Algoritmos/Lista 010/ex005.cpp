	/*	Escreva um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão
		nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar quando for
		lido um número negativo.	*/
		
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int num;
	int iUm=0, iDois=0, iTres=0, iQuatro=0;
	do{
	cout << "Digite um valor: ";
	cin >> num;


	if (num >=0 && num <=25){
		iUm++;	
	} else if (num >=26 && num <=50){
		iDois++;
	} else if (num >=51 && num <=75){
		iTres++;
	} else if (num >=76 && num <=100){
		iQuatro++;
	} 
	} while (num >= 0);
	cout << "Possui " << iUm << " valores entre o intervalo 0-25.\n";
	cout << "Possui " << iDois << " valores entre o intervalo 26-50.\n";
	cout << "Possui " << iTres << " valores entre o intervalo 51-75.\n";
	cout << "Possui " << iQuatro << " valores entre o intervalo 76-100.";

}
