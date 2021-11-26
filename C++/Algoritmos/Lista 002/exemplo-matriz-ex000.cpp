#include <locale.h>
#include <iostream>
using namespace std;
#define tam 3

main (){
	setlocale(LC_ALL,"");
	float notas[7][6], media=0.0; // 7 Linhas & 6 Colunas
	int linha, coluna;
	
	for (linha=0; linha<7; linha++){
		cout << "\nDigite as notas do aluno " << linha << "\n";
		media = 0.0;
		for (coluna=0; coluna<5; coluna++){
			cout << "Digite a nota " << coluna << ": ";
			cin >> notas[linha][coluna];
			media = media + notas[linha][coluna];
		}
		notas[linha][5] = media/5.0;
	}
	
	// Impressão de notas e médias por aluno
	cout << "Nota 1 | Nota 2 | Nota 3 | Nota 4 | Nota 5 | Média |";
	for (linha=0; linha<7; linha++){
		cout << "\n";
		for (coluna=0; coluna<6; coluna++){
			cout << "|" << notas[linha][coluna];
		}
	}
}
