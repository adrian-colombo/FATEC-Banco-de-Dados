#include <iostream>
using namespace std;
main (){
	
	int numero, contador, r;
	cout << "Qual tabuada deseja calcular?: ";
	cin >> numero;
	
	for (contador = 0; contador>=0 && contador <=10; contador++){
		r = numero * contador;
		cout << numero << " x " << contador << " = " << r << "\n";
	}
}
