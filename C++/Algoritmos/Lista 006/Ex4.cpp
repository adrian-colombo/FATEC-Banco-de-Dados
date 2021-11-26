	/*	Faça um programa que receba duas notas (N1 e N2) de um aluno e o tipo de
		aluno (R para regular e E para regime especial). Se o aluno for do tipo R será
		necessário informar as notas obtidas com a resolução de duas listas (L1 e L2).
		Apresente a mensagem “Aprovado” se a média for maior ou igual a 6.0, caso
		contrário informar “Reprovado”.		*/
	
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	float nota_1, nota_2, lista_1, lista_2, media;
	char tipo_aluno;
	
	do {
	cout << "Insira a 1ª nota do aluno: ";
	cin >> nota_1;
	} while (nota_1 < 0 || nota_1 > 10);
	
	do {
	cout << "Insira a 2ª nota do aluno: ";
	cin >> nota_2;	
	} while (nota_2 < 0 || nota_2 > 10);

	do {
	cout << "Digite o tipo de Aluno ('R' para regular, 'E' para regime especial): ";
	cin >> tipo_aluno;
	} while (tipo_aluno != 'R' && tipo_aluno != 'r' && tipo_aluno != 'E' && tipo_aluno != 'e');
	
	switch (tipo_aluno){
		case 'r':
		case 'R':
		
		do {
		cout << "Insira a 1ª lista do aluno: ";
		cin >> lista_1;
		} while (lista_1 < 0 || lista_1 > 10);
		
		do {
		cout << "Insira a 2ª lista do aluno: ";
		cin >> lista_2;	
		} while (lista_2 < 0 || lista_2 > 10);
	
		media = (((nota_1+nota_2)/2)*0.7) + (((lista_1+lista_2)/2)*0.3);
		
		if (media >= 6){
			cout << "\nAprovado\n";
			cout << "Notas obtidas:\n1ª Nota: " << nota_1 << " e 2ª Nota: " << nota_2 << "\n1ª Lista: " << lista_1 << " e 2ª Lista: " << lista_2;
			
		} else {
			cout << "\nReprovado\n";
			cout << "Notas obtidas:\n1ª Nota: " << nota_1 << " e 2ª Nota: " << nota_2 << "\n1ª Lista: " << lista_1 << " e 2ª Lista: " << lista_2;
		}
		break;
		
		case 'e':
		case 'E':
			
		media = (nota_1 + nota_2)/2;
		
		if (media >= 6){
			cout << "\nAprovado";
		} else {
			cout << "\nReprovado";
		}
		break;
}
}
