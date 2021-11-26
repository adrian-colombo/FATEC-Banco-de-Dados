	/*	Faça um algoritmo que receba via teclado a operação (...),
		e dois números. Calcule e imprima o resultado	*/

#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	char op;
	float res,n1,n2;
	

	do {
	cout << "Escolha uma das seguinte operações (+, -, * ou /): ";
	cin >> op;
 } while (op != '+' && op != '-' && op != '*' && op != '/');

	
	cout << "Insira o 1º valor: ";
	cin >> n1;
	
	cout << "Insira o 2º valor: ";
	cin >> n2;
	
	switch (op){
		case '+':
			res = n1 + n2;
			break;
			
		case '-':
			res = n1 - n2;
			break;
			
		case '*':
			res = n1 * n2;
			break;
		
		case '/':
			res = n1 / n2;
			break;
	}
			
	cout << "O resultado de " << n1 << " " << op << " " << n2 << " é igual a " << res;
}

