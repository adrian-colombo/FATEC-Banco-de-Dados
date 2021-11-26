	/*	Escreva um algoritmo que leia um valor inicial A e imprima a seqüência de valores do cálculo de A! e o
		seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120.	*/
		
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	int res, i, j;
	
	cout << "Digite um valor: ";
	cin >> i;
	j=i;
	
	for (res=1; i>0; i--){
		res = res * i;
	}
	cout << j <<"! = " << res;
}
