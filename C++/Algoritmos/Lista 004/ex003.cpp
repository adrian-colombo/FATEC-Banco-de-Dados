	/*	Escreva um algoritmo que some os elementos de um vetor de 5
		posi��es utilizando a inicializa��o de vetor com tamanho	*/

#include <locale.h>
#include <iostream>
#define tam 5

using namespace std;

main (){
	setlocale(LC_ALL,"");

	int x[tam] = {10, 10, 10, 10, 0}, i, soma=0;
	
	for (i=0; i<tam; i++){
		soma = soma + x[i];
	} 
	cout << "A soma dos vetores � igual � " << soma;
}
