	/*	Escreva um algoritmo que some os elementos de dois vetores
		utilizando a inicialização de vetor	*/

#include <locale.h>
#include <iostream>
using namespace std;
#define tam 3

main (){
	setlocale(LC_ALL,"");
	
	int i;
	int x[tam]={0,1,2}, y[tam]={2,2,2}, z[tam];
	
	for (i=0;i<tam;i++){
		z[i] = x[i] + y[i];
	}
	cout << "Soma dos elementos do vetor X com o vetor Y:\n";
	for (i=0;i<tam;i++){
	cout << z[i] << "  ";
}
}
