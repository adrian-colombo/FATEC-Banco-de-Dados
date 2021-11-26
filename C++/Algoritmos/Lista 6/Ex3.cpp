/*	Ler 3 valores e um código de condição. Se o código for c' os valores devem ser
	escritos em ordem “crescente”. Se o código for ‘d’, ‘deve-se escrevê-los em
	ordem “decrescente”. 	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int num1,num2,num3;
	char ordem;
	
	cout << "Digite o 1º número: ";
	cin >> num1;
	
	cout << "Digite o 2º número: ";
	cin >> num2;
	
	cout << "Digite o 3º número: ";
	cin >> num3;
	
	do {
	cout << "Digite 'C' para a ordem crescente ou 'D' para decrescente: ";
	cin >> ordem;
	} while (ordem != 'C' && ordem != 'c' && ordem != 'D' && ordem != 'd');
	
	switch (ordem){	
		case 'c':
		case 'C':

	if (num3 > num1){
    	if (num1 > num2){
	 	cout << num2 << " "  << num1 << " " << num3;
	}else{
		if (num2 < num3){
	    cout << num1 << " " << num2 << " " << num3;
	    }
	}
    }
  
	if (num1 > num2){
    	if (num2 > num3){
		cout << num3 << " " << num2 << " " << num1;
		}else{
		if (num3 < num1){
	    cout << num2 << " " << num3 << " " << num1;
	    }
		}
    }
  
	if (num1 < num2){
    	if (num3 < num1){
		cout << num3 << " " << num1 << " " << num2;
		}else{
		if (num3 < num2){
	    cout << num1 << " " << num3 << " " << num2;
	    }
		}
    }
    break;
    
	case 'd':
	case 'D':
	
		if (num3 < num1){
    	if (num1 < num2){
	 	cout << num2 << " "  << num1 << " " << num3;
	}else{
		if (num2 > num3){
	    cout << num1 << " " << num2 << " " << num3;
	    }
	}
    }
  
	if (num1 < num2){
    	if (num2 < num3){
		cout << num3 << " " << num2 << " " << num1;
		}else{
		if (num3 > num1){
	    cout << num2 << " " << num3 << " " << num1;
	    }
		}
    }
  
	if (num1 > num2){
    	if (num3 > num1){
		cout << num3 << " " << num1 << " " << num2;
		}else{
		if (num3 > num2){
	    cout << num1 << " " << num3 << " " << num2;
	    }
		}
    }
		break;
	}
}

