	/*	Uma empresa ir� dar um aumento salarial aos seus funcion�rios de acordo com a categoria de cada empregado.
		O aumento seguir� a seguinte regra:
		� Funcion�rios das categorias A, C, F, e H ganhar�o 10% de aumento sobre o sal�rio;
		� Funcion�rios das categorias B, D, E, I, J e T ganhar�o 15% de aumento sobre o sal�rio;
		� Funcion�rios das categorias K e R ganhar�o 25% de aumento sobre o sal�rio; */
	
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	float salario;
	float cat_1, cat_2, cat_3;
	char op;	

	cout << "Digite o sal�rio atual: ";
	cin >> salario;
	do {
	cout << "Digite a categoria: ";
	cin >> op;
	} while (op != 'A' && op != 'a' && op != 'C' && op != 'c' && op != 'F' && op != 'f' && op != 'H' && op != 'h' && op != 'B' && op != 'b' && op != 'D' && op != 'd' && op != 'E' && op != 'e' && op != 'I' && op != 'i' && op != 'J' && op != 'j' && op != 'T' && op != 't' && op != 'K' && op != 'k' && op != 'R' && op != 'r'); 
	cout << fixed;
    cout.precision(2);
	
	switch (op){
		case 'A':
		case 'a':
		case 'C':
		case 'c':
		case 'F':
		case 'f':
		case 'H':
		case 'h':
		
		cat_1 = salario + (salario * 0.1);
		cout << "Novo sal�rio: R$" << cat_1;
		break;
		
		case 'K':
		case 'k':
		case 'R':
		case 'r':
			
		cat_3 = salario + (salario * 0.25);
		cout << "Novo sal�rio: R$" << cat_3;
		break;
		
		default:
		cat_2 = salario + (salario * 0.15);
		cout << "Novo sal�rio: R$" << cat_2;
		break;
	}	
}
