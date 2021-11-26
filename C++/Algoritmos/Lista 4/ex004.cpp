	/*	Escreva um algoritmo que encontre o maior valor de um vetor
		utilizando a inicialização de vetor sem tamanho	*/

#include <locale.h>
#include <iostream>
using namespace std;
#define tam 3

main (){
	setlocale(LC_ALL,"");
	
	int x[]={1,5,9}, maior, i;

	maior = x[1];
	for (i=0; i<tam;i++){
		if (x[i] > maior){
			maior = x[i];
		}
	}
	cout << "A maior variável do vetor é igual a " << maior;
}
