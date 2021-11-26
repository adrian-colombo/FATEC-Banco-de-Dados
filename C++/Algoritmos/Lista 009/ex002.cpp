	/*	Faça um algoritmo que calcule e mostre o total de votos por candidato.
		Pergunte se o usuário deseja continuar a votação sim (S) ou não (N).	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	int votos, candidato_1=0, candidato_2=0, nulo=0, branco=0;
	char continuar;
	
	cout << "|| Código dos Candidatos ||\n1.   Candidato 1\n2.   Candidato 2\n3.   Nulo\n4.   Branco\n\n";
	
	do {
	do {
	cout << "Vote: ";
	cin >> votos;
	} while (votos < 1 || votos > 4);

		switch (votos){
		case 1:
			candidato_1 ++;
			break;
		case 2:
			candidato_2 ++;
			break;
		case 3:
			nulo ++;
			break;
		case 4:
			branco ++;
			break;
		}
		cout << "Deseja continuar a votação? (S/N): ";
		cin >> continuar;
	} while (continuar != 'n' && continuar != 'N');
	
	cout << "\nResultado da votação:";
	cout << "\nCandidato 1: " << candidato_1;
	cout << "\nCandidato 2: " << candidato_2;
	cout << "\nNulo: " << nulo;
	cout << "\nBranco: " << branco;
}
