	// Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.
	
#include <iostream>
#include <locale.h>
using namespace std;
#define tam 10

main (){
	setlocale(LC_ALL,"");
	
	int mat[tam][tam], maior_linha, maior_coluna, num;
	int linha, coluna;
	
	for (linha=0; linha<tam; linha++){
		for (coluna=0; coluna<tam; coluna++){
			cout << "Insira o valor da posição [" << linha+1 << "][" << coluna+1 << "]: ";
			cin >> mat[linha][coluna];
			
			
			if (mat[linha][coluna] > num){
				maior_linha = linha + 1;
				maior_coluna = coluna +1;
				num = mat[linha][coluna];
			}
		}
	}
	cout << "\nO maior valor se encontra na matriz [" << maior_linha << "][" << maior_coluna << "].";
}
