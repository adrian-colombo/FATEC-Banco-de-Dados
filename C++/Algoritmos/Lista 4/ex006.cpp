	/*	Fa�a um algoritmo para acessar um vetor de 10 posi��es, em seguida imprima
		o vizinho da direita e da esquerda de cada posi��o do vetor	*/

#include <locale.h>
#include <iostream>
using namespace std;
#define tam 10

main (){
	setlocale(LC_ALL,"");
	int i;
	int x[tam], ant[tam], suc[tam];
	
	for (i=0;i<tam;i++){
		cout << "Digitar o " << i+1 << "� valor: ";
		cin >> x[i];
	}
	for (i=0;i<tam;i++){
		ant[i] = x[i-1];
		suc[i] = x[i+1];
	}
	for (i=0;i<tam;i++){
	cout << "\n\nValor do " << i+1 << "� vetor:";
	cout << "\nO vetor a esquerda  � < " << ant[i] <<" >";
	cout << " e a sua direita � < " << suc[i] << " >";
	}
}
