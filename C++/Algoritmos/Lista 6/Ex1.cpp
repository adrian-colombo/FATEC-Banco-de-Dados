/*	Escreva um programa que leia duas variáveis
	inteiras e troque o conteúdo entre elas.	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int a,b,c;
		
	cout << "Digite o primeiro valor (Valor A): ";
	cin >> a;
	
	cout << "Digite o segundo valor (Valor B): ";
	cin >> b;
	
	c = b;
	b = a;
	a = c;
	
	cout << "\nValor de A: " << a;
	cout << "\nValor de B: " << b;
	
}

