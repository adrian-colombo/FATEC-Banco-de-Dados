		/* 	Fa�a uma rotina recursiva para calcular a somat�ria de todos os n�mero de 1 a N (N ser� lido do teclado).
			som n = som(n-1) + n	*/
		#include <iostream>
		using namespace std;
		
		int soma (int n) {
			if(n == 0) {
				return 0;
			} else if (n == 1) {
					return 1;
				} else if (n > 1) {
						return n + soma(n-1);
					}
				}
		
		int main () {
			setlocale( LC_ALL, "" );
			int num;
			cout << "Insira um valor: ";
			cin >> num;
			cout << "\nSomat�ria de  " << num << " = " << soma(num) << endl;
		}
