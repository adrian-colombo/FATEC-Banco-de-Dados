	/*	Faça um algoritmo para acessar uma matriz 3 x 3 em seguida troque o conteúdo
		da primeira linha (índice 0) com o conteúdo da última linha (índice 2) da matriz.	*/

#include <iostream>
#include <locale.h>
using namespace std;
#define tam 3

main (){
	setlocale(LC_ALL,"");
	
	int mat[tam][tam], new_mat[tam][tam];
	int linha, coluna;
	
	
	for (linha=0; linha<tam; linha++){
		for (coluna=0; coluna<tam; coluna++){
			cout << "Insira o valor da posição [" << linha+1 << "][" << coluna+1 << "]: ";
			cin >> mat[linha][coluna];
		}
	}

	cout << "\n -- Matriz Original -- \n";
	for (linha=0; linha<tam; linha++){
    	for (coluna=0; coluna<3; coluna++){
    		cout << mat[linha][coluna] << "\t";
    		}
    		cout << "\n";
		}
		
		cout << "\n\n -- Matriz Modificada -- \n";
				
	for (linha=0; linha<tam; linha++){
    	for (coluna=0; coluna<tam; coluna++){
    		
			new_mat [0][coluna] = mat[2][coluna];
    		new_mat [1][coluna] = mat[1][coluna];
    		new_mat [2][coluna] = mat[0][coluna];
    		
    		cout << new_mat[linha][coluna] << "\t";
    		}
    		cout << "\n";
		}
	}
