	/*	Fa�a um algoritmo que receba via teclado a opera��o (...),
		e dois n�meros. Calcule e imprima o resultado	*/

#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	char op;
	float res,n1,n2;
	

	do {
	cout << "Escolha uma das seguinte opera��es (+, -, * ou /): ";
	cin >> op;
 } while (op != '+' && op != '-' && op != '*' && op != '/');

	
	cout << "Insira o 1� valor: ";
	cin >> n1;
	
	cout << "Insira o 2� valor: ";
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
			
	cout << "O resultado de " << n1 << " " << op << " " << n2 << " � igual a " << res;
}

