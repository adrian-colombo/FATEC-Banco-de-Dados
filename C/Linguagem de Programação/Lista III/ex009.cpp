#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Crie um procedimento receba um valor real e dentro deste é feito a chamada de uma função,
	passando por parâmetro o valor recebido. A função deve retornar o valor multiplicado por 10 e exibido o resultado dentro do procedimento.
*/

float multiplicador(float valor);

void recebeValor(){
	float num;
	printf("Digite um valor: ");
	scanf("%f",&num);
	printf("\n\nO valor multiplicado por 10 é: %.3f", multiplicador(num));
}

float multiplicador(float valor){
	return valor*10;
}


main (){
	setlocale (LC_ALL, "");
	recebeValor();
}

