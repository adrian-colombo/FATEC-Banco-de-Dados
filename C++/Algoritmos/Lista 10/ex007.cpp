	/*	Fa�a um algoritmo que realize as tarefas conforme as op��es da Tabela 1.	*/
		
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int multiplicacao=1, soma=0, num=1;
	int op=1;
	
	while (op != 3){
		system ("cls");
		cout << "1 - Multiplique v�rios n�meros";
		cout << "\n2 - Some v�rios n�meros";
		cout << "\n3 - Sair";
		cout << "\n\nInsira a op��o desejada: ";
		cin >> op;
		
		if (op == 1){
			system ("cls");
			cout << "Insira o n�mero 1 (UM) para finalizar a conta.\n";		
			do {
				cout << "Insira o valor: ";
				cin >> num;
				multiplicacao = multiplicacao * num;
			} while (num != 1);
			cout << "A multiplica��o dos n�meros � " << multiplicacao << ".";
			cout << "\n\nInsira ENTER para voltar ao menu.";
			fflush(stdin);
			getchar();
		} else if (op == 2){
			system ("cls");
			cout << "Insira o n�mero 0 (ZERO) para finalizar a conta.\n";		
			do {
				cout << "Insira o valor: ";
				cin >> num;
				soma = soma + num;
			} while (num != 0);
			cout << "A soma dos n�meros � " << soma << ".";
			cout << "\n\nInsira ENTER para voltar ao menu.";
			fflush(stdin);
			getchar();
		} else if (op == 3){
			system ("cls");
			cout << "Programa encerrado.";
		} else{
			system ("cls");
			cout << "Insira um valor v�lido.";
			cout << "\nInsira ENTER para voltar ao menu.";
			fflush(stdin);
			getchar();
		}

}
}
