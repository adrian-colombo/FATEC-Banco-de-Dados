	/*	Fa�a um algoritmos que acesse valores para um vetor de 10 posi��es e apresente
		o conte�do do vetor ao contr�rio. */

#include <iostream>
#include <locale.h>
using namespace std;
#define tam 10

main (){
	setlocale(LC_ALL,"");

	int vet[tam], new_vet[tam];
	int i;
	
	for (i=0;i<tam;i++){
		cout << "Insira o " << i+1 << "� valor: ";
		cin >> vet[i];
	}
	
	cout << "O vetor invertido �: ";
	
	for (i=0;i<tam;i++){
	new_vet[i] = vet [tam-i-1];
	cout << new_vet[i] << " ";
	}

}
