	/*	Faça um programa para ler 500 números e mostrar o
		resultado da soma dos números	- FOR*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	float soma=0, num;
	int i;
	
	for(i=1; i<=500; i++) {
		cout << "Digite o " << i << "º valor: ";
		cin >> num;
		soma = soma + num;
	}
		cout << soma;
}

