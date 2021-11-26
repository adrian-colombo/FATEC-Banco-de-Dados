	/*	Calcule a m�dia de um aluno que possui 2 notas bimestrais. A regra da aprova��o
	� possuir a m�dia igual ou superior a 6.0 pontos, lembrando que o limite � at� 10 pontos,
	caso o aluno n�o atinja os 6.0 pontos ele estar� de substitutiva.	*/

#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	float nota1, nota2, media;
	char op;
	
	do {
		cout << "Insira a nota do 1� bimestre: ";
		cin >> nota1;
		
		cout <<"Insira a nota do 2� bimestre: ";
		cin >> nota2;
		
		if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10){
			cout << "\nNotas inseridas inv�lidas.\nDigite a nota no intervalo de 0 � 10.";
		} else {
		
		media = (nota1 + nota2) / 2;
		
		if (media >= 6 && media <=10 ) {
			cout << "\nAluno aprovado com " << media << " pontos na media";
		} else {
			cout << "\nAluno em substitutiva.";
		}
	}
		cout << "\nDeseja continuar? S/N\n";
		cin >> op;
} while (op =='s' || op =='S');
}
