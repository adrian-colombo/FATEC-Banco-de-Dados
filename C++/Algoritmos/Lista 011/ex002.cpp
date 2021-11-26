	/*	Faça um algoritmos que acesse valores para um vetor de 10 posições e apresente
		o conteúdo do vetor ao contrário. */

#include <iostream>
#include <locale.h>
using namespace std;
#define tam 10

main (){
	setlocale(LC_ALL,"");

	int vet[tam], new_vet[tam];
	int i;
	
	for (i=0;i<tam;i++){
		cout << "Insira o " << i+1 << "º valor: ";
		cin >> vet[i];
	}
	
	cout << "O vetor invertido é: ";
	
	for (i=0;i<tam;i++){
	new_vet[i] = vet [tam-i-1];
	cout << new_vet[i] << " ";
	}

}
