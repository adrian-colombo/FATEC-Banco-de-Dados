#include<stdio.h>
#include<locale.h>
#include<windows.h>

/*
	Fa�a uma fun��o que recebe a m�dia final de um aluno por par�metro e retorna o seu conceito, conforme a tabela abaixo:
*/

char exibeConceito(float media){

	if (media >=0 && media <=4.9){
		return 'D';
	} else if (media >=5 && media <=6.9){
		return 'C';
	} else if (media >=7 && media <=8.9){
		return 'B';
	} else if (media >=9 && media <=10){
		return 'A';
	}
}

main (){
	setlocale (LC_ALL, "");
	float nota1, nota2, media_final;
	do {
	printf("Digita a 1� Nota: ");
	scanf("%f",&nota1);
	} while (nota1 < 0 || nota1 > 10); // Apenas notas entre 0 � 10
	do {
	printf("Digita a 2� Nota: ");
	scanf("%f",&nota2);
	} while (nota2 < 0 || nota2 > 10); // Apenas notas entre 0 � 10
	media_final = (nota1 + nota2)/2;
	printf("\nO aluno est� no conceito %c.", exibeConceito(media_final));
}

