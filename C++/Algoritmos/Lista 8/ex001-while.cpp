	/*	Faça um programa para ler 500 números e mostrar o
		resultado da soma dos números	- DO WHILE*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	float soma=0, num;
	int i;
	
	do{
		cout << "Digite o " << i << "º valor: ";
		cin >> num;
		soma = soma + num;
		i++;
	} while (i <=500);
		cout << soma;
}

