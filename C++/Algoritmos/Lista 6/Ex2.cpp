/*	Ler um n�mero inteiro e mostrar uma mensagem indicando se este n�mero �
	par ou �mpar.	*/
	
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int num;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	
	if ((num% 2)==0){
		cout << "O n�mero " << num << " � par.";
	} else {
		cout << "O n�mero " << num << " � impar.";
	}

	
}
