/*	Utilizando switch, criar um programa para calcular o valor da multa a ser paga
	de anuidade de uma associa��o. A anuidade deve ser paga no m�s de janeiro.
	Por m�s, � cobrado 5% de juros (com juros sobre juros). Por exemplo, uma
	associa��o de R$100 paga em janeiro custa R$ 100; em fevereiro, custa R$105;
	em mar�o, custa R$110,25; e, em dezembro, R$171,03.		*/

#include <locale.h>
#include <math.h>
#include <iostream>
#define taxa_juros 0.05
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	float multa, total_multa;
	int mes;
	
	cout << "Digite o valor da multa: ";
	cin >> multa;
	do {
	cout << "Digite o n�mero do m�s: ";
	cin >> mes;
	} while (mes < 1 || mes > 12);
	
	cout << fixed;
    cout.precision(2);
	
	switch (mes){
		case 1:
		total_multa = multa * pow((1+taxa_juros), 0);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Janeiro!";
		break;
		
		case 2:
		total_multa = multa * pow((1+taxa_juros), 1);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Fevereiro!";
		break;
		
		case 3:
		total_multa = multa * pow((1+taxa_juros), 2);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Mar�o!";
		break;
		
		case 4:
		total_multa = multa * pow((1+taxa_juros), 3);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Abril!";
		break;
		
		case 5:
		total_multa = multa * pow((1+taxa_juros), 4);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Maio!";
		break;
		
		case 6:
		total_multa = multa * pow((1+taxa_juros), 5);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Junho!";
		break;
		
		case 7:
		total_multa = multa * pow((1+taxa_juros), 6);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Julho!";
		break;
		
		case 8:
		total_multa = multa * pow((1+taxa_juros), 7);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Agosto!";
		break;
		
		case 9:
		total_multa = multa * pow((1+taxa_juros), 8);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Setembro!";
		break;
		
		case 10:
		total_multa = multa * pow((1+taxa_juros), 9);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Outubro!";
		break;
		
		case 11:
		total_multa = multa * pow((1+taxa_juros), 10);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Novembro!";
		break;
		
		default:
		total_multa = multa * pow((1+taxa_juros), 11);
		cout << "\nValor da multa: R$" << total_multa << "\nMulta a ser paga em Dezembro!";
		break;
	}
	
}

