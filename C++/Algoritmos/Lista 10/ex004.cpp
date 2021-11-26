	/*	Fa�a  um  programa  para  ler  os dados de  100	funcion�riosde  uma  empresa,  sendo  esses
		dados,matr�cula, idade, g�nero,altura, concursado [S/N]. Calcular e mostrar: ...*/

#include <locale.h>
#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	
	int i, j=0, cont, matricula;
	float altura;
	int idade;
	int homem=0, mulher_concursada=0, mulher_maistrinta=0, maior_idade=0, media_altura=0;
	char concursado, genero, inicio;	
	
	for (i=1; i<=2; i++){
		cout << i <<"� registro:\n";
		cout << "Qual a sua idade? ";
		cin >> idade;
		
		cout << "C�digo da matr�cula: ";
		cin >> matricula;
	
		do {
		cout << "Voc� � concursado? (S/N): ";
		cin >> concursado;
		} while (concursado != 'S' && concursado != 's' && concursado != 'N' && concursado != 'n');
			
		do {
		cout << "Qual o seu g�nero? (H/M): ";
		cin >> genero;
	 } while (genero != 'H' && genero != 'h' && genero != 'M' && genero != 'm');
	
		cout << "Qual a sua altura? (CM): ";
		cin >> altura;
		cout << "\n";
		
		// Conta o n�mero de homens
		if (genero == 'H' || genero == 'h'){
			homem++;
		}
		
		// Conta o n�mero de mulheres concursadas
		if ((genero == 'M' || genero == 'm') && (concursado == 'S' || concursado == 's')){
			mulher_concursada ++;
		} 
		
		// Conta o n�mero de mulheres n�o concursadas com mais de 30 anos
		if ((genero == 'M' || genero == 'm') && (concursado == 'N' || concursado == 'n') && (idade > 30)){
			mulher_maistrinta++;
		}
		
		// O homem mais velho concursado
		if ((genero == 'H' || genero == 'h') && (concursado == 'S' || concursado == 's')){
			while (idade > maior_idade){
				maior_idade = idade;
			}
		}
		
		// M�dia das alturas dos homens com menos de 40 anos
		if ((genero == 'H' || genero == 'h') && idade < 40){
			media_altura = altura + media_altura;	
			j++;		
		}
		
	}
	cout << "\nN�mero de funcion�rias concursadas: " << mulher_concursada;
	cout << "\nN�mero de funcion�rios (somente homens): " << homem;
	cout << "\nA maior idade dos homens concursados: " << maior_idade;
	cout << "\nA quantidade de mulheres com mais de 30 anos sem concurso: " << mulher_maistrinta;
	cout << "\nA m�dia das alturas dos homens com menos de 40 anos: " << media_altura/j << "cm";
}
