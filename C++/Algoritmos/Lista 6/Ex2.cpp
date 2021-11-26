/*	Ler um número inteiro e mostrar uma mensagem indicando se este número é
	par ou ímpar.	*/
	
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int num;
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
	if ((num% 2)==0){
		cout << "O número " << num << " é par.";
	} else {
		cout << "O número " << num << " é impar.";
	}

	
}
