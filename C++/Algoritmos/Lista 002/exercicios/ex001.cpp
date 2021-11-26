	/*	1) Faça um programa C que leia e preencha uma matriz 3x3 com valores inteiros entre 0 e 10, e indique:
		a) Quantas vezes o 9 aparece na matriz.	*/


#include <locale.h>
#include <iostream>
using namespace std;
#define tam 3

main (){
	setlocale(LC_ALL,"");

	int mat[tam][tam], valor=0;
	int linha, coluna;
	
	cout << "Insira valores apenas entre 0 à 10!!!\n";
	
	for (linha=0; linha<tam; linha++){
		for (coluna=0; coluna<tam; coluna++){
			do {
			cout << "Insira o valor da posição [" << linha+1 << "][" << coluna+1 << "]: ";
			cin >> mat[linha][coluna];
			} while (mat[linha][coluna] < 0 || mat[linha][coluna] > 10);
		}
	}
	
	for (linha=0; linha<tam; linha++){
		for (coluna=0; coluna<tam; coluna++){
	if (mat[linha][coluna] == 9){
		valor++;
	}
	
		}
	}
	cout << "\nO número nove aparece " << valor << " vezes na matriz.";
}
