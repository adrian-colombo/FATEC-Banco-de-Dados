#include <locale.h>
#include <iostream>
using namespace std;
#define tam 3

main (){
	setlocale(LC_ALL,"");

	int i,j;
	int valores [3][3];
	
	cout << "Digite nove números: ";
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			cin >> valores[i][j];
		}
	}
	
	for (i=0;i<3;i++){
		cout << "\nLinha " << i;
		for (j=0;j<3;j++){
			cout << "\n" << valores [i][j];
		}
	}
}
