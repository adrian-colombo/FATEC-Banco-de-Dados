/*	Ler 3 valores e um c�digo de condi��o. Se o c�digo for c' os valores devem ser
	escritos em ordem �crescente�. Se o c�digo for �d�, �deve-se escrev�-los em
	ordem �decrescente�. 	*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int num1,num2,num3;
	char ordem;
	
	cout << "Digite o 1� n�mero: ";
	cin >> num1;
	
	cout << "Digite o 2� n�mero: ";
	cin >> num2;
	
	cout << "Digite o 3� n�mero: ";
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

