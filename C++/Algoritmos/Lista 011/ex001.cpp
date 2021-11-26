	/*	Leia um vetor de 20 posições.
		Contar e escrever quantos valores pares ele possui.	*/


#include <iostream>
#include <locale.h>
using namespace std;
#define tam 20

main (){
	setlocale(LC_ALL,"");

	int num[tam]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i, j=0;
	
	cout << "Elementos pares encontrados no vetor: ";
	for (i=0;i<tam;i++){
		if (num[i] % 2 == 0){
			cout << num[i] << " ";
			j++;
		}
	}
	cout << "\nForam encontrados "<< j << " números pares.";
}
