#include <iostream>
using namespace std;
main (){
	
	int numero, contador, r;
	cout << "Qual tabuada deseja calcular?: ";
	cin >> numero;
	
	contador = 0;
	while (contador>=0 && contador <=10){
		r = numero * contador;
		cout << numero << " x " << contador << " = " << r << "\n";
		contador++;
	}
	
}
