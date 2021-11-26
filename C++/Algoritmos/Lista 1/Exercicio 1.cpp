	/*	Calcule a média de um aluno que possui 2 notas bimestrais. A regra da aprovação
	é possuir a média igual ou superior a 6.0 pontos, lembrando que o limite é até 10 pontos,
	caso o aluno não atinja os 6.0 pontos ele estará de substitutiva.	*/

#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	float nota1, nota2, media;
	char op;
	
	do {
		cout << "Insira a nota do 1º bimestre: ";
		cin >> nota1;
		
		cout <<"Insira a nota do 2º bimestre: ";
		cin >> nota2;
		
		if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10){
			cout << "\nNotas inseridas inválidas.\nDigite a nota no intervalo de 0 à 10.";
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
