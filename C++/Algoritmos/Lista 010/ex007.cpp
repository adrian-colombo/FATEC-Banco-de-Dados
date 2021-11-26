	/*	Faça um algoritmo que realize as tarefas conforme as opções da Tabela 1.	*/
		
#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int multiplicacao=1, soma=0, num=1;
	int op=1;
	
	while (op != 3){
		system ("cls");
		cout << "1 - Multiplique vários números";
		cout << "\n2 - Some vários números";
		cout << "\n3 - Sair";
		cout << "\n\nInsira a opção desejada: ";
		cin >> op;
		
		if (op == 1){
			system ("cls");
			cout << "Insira o número 1 (UM) para finalizar a conta.\n";		
			do {
				cout << "Insira o valor: ";
				cin >> num;
				multiplicacao = multiplicacao * num;
			} while (num != 1);
			cout << "A multiplicação dos números é " << multiplicacao << ".";
			cout << "\n\nInsira ENTER para voltar ao menu.";
			fflush(stdin);
			getchar();
		} else if (op == 2){
			system ("cls");
			cout << "Insira o número 0 (ZERO) para finalizar a conta.\n";		
			do {
				cout << "Insira o valor: ";
				cin >> num;
				soma = soma + num;
			} while (num != 0);
			cout << "A soma dos números é " << soma << ".";
			cout << "\n\nInsira ENTER para voltar ao menu.";
			fflush(stdin);
			getchar();
		} else if (op == 3){
			system ("cls");
			cout << "Programa encerrado.";
		} else{
			system ("cls");
			cout << "Insira um valor válido.";
			cout << "\nInsira ENTER para voltar ao menu.";
			fflush(stdin);
			getchar();
		}

}
}
