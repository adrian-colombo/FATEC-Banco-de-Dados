	/*	Fa�a um algoritmo que receba um m�s do ano (de 1 a 12)
		e imprima o seu nome do m�s em v�deo	*/

#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	int mes;
	
	cout << "Insira o m�s do ano (em n�mero): ";
	cin >> mes;
	
	if (mes == 1) {
		cout << "Janeiro";
	}
	
	else if (mes == 2) {
		cout << "Fevereiro";
	}
	
	else if (mes == 3) {
	cout << "Mar�o";
	}
	
	else if (mes == 4) {
	cout << "Abril";
	}
	
	else if (mes == 5) {
	cout << "Maio";
	}
	
	else if (mes == 6) {
	cout << "Junho";
	}

	else if (mes == 7) {
	cout << "Julho";
	}
	
	else if (mes == 8) {
	cout << "Agosto";
	}
	
	else if (mes == 9) {
	cout << "Setembro";
	}
	
	else if (mes == 10) {
	cout << "Outubro";
	}
	
	else if (mes == 11) {
	cout << "Novembro";
	}
	
	else if (mes == 12) {
	cout << "Dezembo";
	} else {
		cout << "Insira um valor v�lido!";
	}
	
}

	
