	/* Escreva um algoritmo que leia 50 valores e encontre 
		o maior e o menor deles. Mostre o resultado.	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");

	float num, maior, menor;
	int i;
	
	cout << "Digite o " << i+1 << "� n�mero: ";
	cin >> num;
	
	maior = num;
	menor = num;
	
	for (i=1; i<5; i++){
		cout << "Digite o " << i+1 << "� n�mero: ";
		cin >> num;
		
		if (num > maior){
			maior = num;
		} else if (num < menor){
			menor = num;
		}
		}
	cout << "\nO menor n�mero � " << menor << ".\n";
	cout << "O maior n�mero � " << maior << ".\n";
}
