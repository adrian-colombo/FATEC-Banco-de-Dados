	/*	Fa�a um programa para ler 500 n�meros e mostrar o
		resultado da soma dos n�meros	- DO WHILE*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	float soma=0, num;
	int i;
	
	do{
		cout << "Digite o " << i << "� valor: ";
		cin >> num;
		soma = soma + num;
		i++;
	} while (i <=500);
		cout << soma;
}

