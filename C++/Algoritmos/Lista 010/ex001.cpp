	/*	Fa�a um algoritmo para calcular a tabuadade um n�mero, de maneira que o usu�rio
		tamb�m informe o in�cioe o fim da tabuada. Por exemplo: usu�rio solicitando a tabuada
		do n�mero 6, com in�cioem 5 e fim em 8.
		
		FOR	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int num, inicio, fim, res;
	int i;
	
	cout << "Digite o n�mero da tabuada: ";
	cin >> num;
	
	cout << "Digite o inicio da tabuada: ";
	cin >> inicio;
	
	cout << "Digite o fim da tabuada: ";
	cin >> fim;
	cout << "\nTabuada do n�mero " << num << ".\n";
	
	for (i=inicio; i<=fim; i++){
		res = num * i;		
		cout << num << " x " << i << " = " << res << "\n";
	}
	
}

