	/*	Agora modifique o exercício2, considerando agora somente os resultados que forem ímpares. 	*/

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
	cout << "\nTabuada do número " << num << " com resultados impares.\n";
	
	for (i=inicio; i<=fim; i++){
		res = num * i;
		if (res % 2 == 1){
		cout << num << " x " << i << " = " << res << "\n";
	}
	}
	
}
