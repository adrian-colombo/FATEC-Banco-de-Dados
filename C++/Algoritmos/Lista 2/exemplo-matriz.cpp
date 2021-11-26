#include <locale.h>
#include <iostream>
using namespace std;
#define tam 3

main (){
	setlocale(LC_ALL,"");

	float num[2][3], soma;
	int linha, coluna;
	soma=0.0;
	
	
	for (linha=0; linha<2; linha++){
		for (coluna=0; coluna<3; coluna++){
			cout << "Linha = " << linha << " e Coluna = " << coluna << "\nInsira o valor: ";
			cin >> num[linha][coluna];
			soma = soma + num[linha][coluna];
		}
	}
	// Impresssão da soma
	cout << "\n Soma = " << soma;
	
	for (linha=0; linha<2; linha++){
		for (coluna=0; coluna<3; coluna++){
			cout << "\n Linha = " << linha << " e Coluna = " << coluna << " = " << num[linha][coluna];
		}
	}
}
