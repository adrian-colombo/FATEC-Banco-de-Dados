	/*	Escreva um algoritmo C/C++ que leia um n�mero inteiro A e
		um vetor X inteiro de 20 posi��es. Conte quantos valores iguais e A
		est�o no vetor.		*/

#include <locale.h>
#include <iostream>
using namespace std;
#define cont 20

main (){
	setlocale(LC_ALL,"");
	
	int a=0, x[cont], qnt=0;
	int i;
	
	cout << "Digite um valor para A: ";
	cin >> a;
	
	for (i=0;i<cont;i++){
		cout << "Digite um valor para X: ";
		cin >> x[i];
	}
	
	for (i=0;i<cont;i++){
		if (a == x[i]){
			qnt++;
		}
	}
	cout << "Possui " << qnt << " valor(es) de X igual(is) � A."; 
}
