	/*	Faça um algoritmo para acessar um vetor de 10 posições, em seguida imprima
		o vizinho da direita e da esquerda de cada posição do vetor	*/

#include <locale.h>
#include <iostream>
using namespace std;
#define tam 10

main (){
	setlocale(LC_ALL,"");
	int i;
	int x[tam], ant[tam], suc[tam];
	
	for (i=0;i<tam;i++){
		cout << "Digitar o " << i+1 << "º valor: ";
		cin >> x[i];
	}
	for (i=0;i<tam;i++){
		ant[i] = x[i-1];
		suc[i] = x[i+1];
	}
	for (i=0;i<tam;i++){
	cout << "\n\nValor do " << i+1 << "º vetor:";
	cout << "\nO vetor a esquerda  é < " << ant[i] <<" >";
	cout << " e a sua direita é < " << suc[i] << " >";
	}
}
