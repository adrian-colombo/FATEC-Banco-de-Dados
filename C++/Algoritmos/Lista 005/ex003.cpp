	/*	Fa�a um algoritmo que receba um m�s do ano (de 1 a 12)
		e imprima o seu nome do m�s em v�deo	*/

#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	int mes;
	
	cout << "Digite o m�s do ano (1 � 12): ";
	cin >> mes;
	
	switch (mes){
		case 1:
			cout << "Janeiro";
			break;
		case 2:
			cout << "Fevereiro";
			break;
		case 3:
			cout << "Mar�o";
			break;
		case 4:
			cout << "Abril";
			break;
		case 5:
			cout << "Maio";
			break;
		case 6:
			cout << "Junho";
			break;
		case 7:
			cout << "Julho";
			break;
		case 8:
			cout << "Agosto";
			break;
		case 9:
			cout << "Setembro";
			break;
		case 10:
			cout << "Outubro";
			break;
		case 11:
			cout << "Novembro";
			break;
		case 12:
			cout << "Dezembro";
			break;
		default:
			cout << "Insira um valor v�lido!";
	}
}

	
