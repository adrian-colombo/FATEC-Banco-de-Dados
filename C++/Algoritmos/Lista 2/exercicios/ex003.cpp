	/*	3) Faça um algoritmo que leia duas matrizes A e B de tamanho 4 x 4, conte e mostre quais dos valores que estão
		na matriz A também aparecem na matriz B, independente de sua posição na matriz B.	*/

#include <locale.h>
#include <iostream>
using namespace std;
#define tam 2

main (){
	setlocale(LC_ALL,"");
	int matx[tam][tam], maty[tam][tam], vet[16]={-9312}, i,j;
	int linhax, colunax, linhay, colunay;
	
	cout << "MATRIZ A:\n";	
	for (linhax=0; linhax<tam; linhax++){
		for (colunax=0; colunax<tam; colunax++){
			cout << "Insira o valor da posição [" << linhax+1 << "][" << colunax+1 << "]: ";
			cin >> matx[linhax][colunax];
		}
	}

	cout << "\nMATRIZ B:\n";
	for (linhay=0; linhay<tam; linhay++){
		for (colunay=0; colunay<tam; colunay++){
			cout << "Insira o valor da posição [" << linhay+1 << "][" << colunay+1 << "]: ";
			cin >> maty[linhay][colunay];
		}
	}
	
	for (linhax=0; linhax<tam; linhax++){
		for (colunax=0; colunax<tam; colunax++){
			bool res;
			for (i=0; i<16; i++){
				if(vet[i] == -9312){
					res = true;
				}
				else {
					res = false;
				}
				for (linhay=0; linhay<tam; linhay++){
					for (colunay=0; colunax<tam; colunay++){
						if (res =w= false){
							if (matx[linhax][colunax] == maty[linhay][colunay]){
								vet[i] = matx[linhax][colunax];
						}
						}
					}
				}
			}
		}	
	}
	cout << "Os mesmos números se repetem em ambas matrizes:";
	for (i=0;i<16; i++){
		cout << vet[i];
	}
}
