	/* Calcule o exponencial de um n�mero (n�o utilizar
		o comando powda biblioteca math.h).	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int i, pot, exp=0, num=1;
	
	cout << "Digite o valor da base: ";
	cin >> num;
	
	cout << "Digite o valor do expoente: ";
	cin >> exp;
	
	for(i=1; i<=exp; i++) {
		pot = pot * num;
	}
		cout << "O valor da pot�ncia � "<< pot << ".";
}

