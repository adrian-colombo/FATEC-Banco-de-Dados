	/*	Agora modifique o exerc�cio2, considerando agora somente os resultados que forem �mpares. 	*/

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
	cout << "\nTabuada do n�mero " << num << " com resultados impares.\n";
	
	for (i=inicio; i<=fim; i++){
		res = num * i;
		if (res % 2 == 1){
		cout << num << " x " << i << " = " << res << "\n";
	}
	}
	
}
