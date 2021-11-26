	/*	Faça um algoritmo para calcular a tabuadade um número, de maneira que o usuário
		também informe o inícioe o fim da tabuada. Por exemplo: usuário solicitando a tabuada
		do número 6, com inícioem 5 e fim em 8.
		
		FOR	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int num, inicio, fim, res;
	int i;
	
	cout << "Digite o número da tabuada: ";
	cin >> num;
	
	cout << "Digite o inicio da tabuada: ";
	cin >> inicio;
	
	cout << "Digite o fim da tabuada: ";
	cin >> fim;
	cout << "\nTabuada do número " << num << ".\n";
	
	for (i=inicio; i<=fim; i++){
		res = num * i;		
		cout << num << " x " << i << " = " << res << "\n";
	}
	
}

