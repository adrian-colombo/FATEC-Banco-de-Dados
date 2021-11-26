	/*	Faça  um  programa  para  ler  os dados de  100	funcionáriosde  uma  empresa,  sendo  esses
		dados,matrícula, idade, gênero,altura, concursado [S/N]. Calcular e mostrar: ...*/

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
		cout << i <<"º registro:\n";
		cout << "Qual a sua idade? ";
		cin >> idade;
		
		cout << "Código da matrícula: ";
		cin >> matricula;
	
		do {
		cout << "Você é concursado? (S/N): ";
		cin >> concursado;
		} while (concursado != 'S' && concursado != 's' && concursado != 'N' && concursado != 'n');
			
		do {
		cout << "Qual o seu gênero? (H/M): ";
		cin >> genero;
	 } while (genero != 'H' && genero != 'h' && genero != 'M' && genero != 'm');
	
		cout << "Qual a sua altura? (CM): ";
		cin >> altura;
		cout << "\n";
		
		// Conta o número de homens
		if (genero == 'H' || genero == 'h'){
			homem++;
		}
		
		// Conta o número de mulheres concursadas
		if ((genero == 'M' || genero == 'm') && (concursado == 'S' || concursado == 's')){
			mulher_concursada ++;
		} 
		
		// Conta o número de mulheres não concursadas com mais de 30 anos
		if ((genero == 'M' || genero == 'm') && (concursado == 'N' || concursado == 'n') && (idade > 30)){
			mulher_maistrinta++;
		}
		
		// O homem mais velho concursado
		if ((genero == 'H' || genero == 'h') && (concursado == 'S' || concursado == 's')){
			while (idade > maior_idade){
				maior_idade = idade;
			}
		}
		
		// Média das alturas dos homens com menos de 40 anos
		if ((genero == 'H' || genero == 'h') && idade < 40){
			media_altura = altura + media_altura;	
			j++;		
		}
		
	}
	cout << "\nNúmero de funcionárias concursadas: " << mulher_concursada;
	cout << "\nNúmero de funcionários (somente homens): " << homem;
	cout << "\nA maior idade dos homens concursados: " << maior_idade;
	cout << "\nA quantidade de mulheres com mais de 30 anos sem concurso: " << mulher_maistrinta;
	cout << "\nA média das alturas dos homens com menos de 40 anos: " << media_altura/j << "cm";
}
