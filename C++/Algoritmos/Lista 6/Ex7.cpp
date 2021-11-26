	/*	Faça um algoritmo que leia a nota de um aluno e exiba o conceito,
		conforme Tabela 2. */
	
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	float nota;
	
	do {
	cout << "Digite a nota do aluno: ";
	cin >> nota;
	}  while (nota < 0 || nota > 10);
	
	if (nota >=0 && nota <=2.9){
		cout << "Conceito E";
	}
	else if (nota >=3 && nota <=4.9){
		cout << "Conceito D";
	}
	else if (nota >=5 && nota <=6.9){
		cout << "Conceito C";
	}
	else if (nota >=7 && nota <=8.9){
		cout << "Conceito B";
	}
	else {
		cout << "Conceito A";
	}
	
	
}
