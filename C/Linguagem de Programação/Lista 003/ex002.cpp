#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>
#define PI 3.14

/*
	Fa�a um procedimento que recebe por par�metro o raio de uma esfera e calcula o seu volume (v = 1.33 * PI * R�).
	Pesquise e use a fun��o pow() para a exponencia��o.
*/

void calculaVolume(float raio){
	float volume;
	volume = 1.33 * PI * pow(raio,3);
	printf("\n\nO volume �: %.2f", volume);
}

main (){
	setlocale (LC_ALL, "");
	float raio;
	printf("Digite o raio de uma esfera: ");
	scanf("%f",&raio);
	calculaVolume(raio);
}

