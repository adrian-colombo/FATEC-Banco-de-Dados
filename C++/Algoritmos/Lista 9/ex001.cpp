	/*	Fa�a um programa para ler 500 n�meros e mostrar o
		resultado da soma dos n�meros	- FOR*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	float soma=0, num;
	int i;
	
	for(i=1; i<=500; i++) {
		cout << "Digite o " << i << "� valor: ";
		cin >> num;
		soma = soma + num;
	}
		cout << soma;
}

