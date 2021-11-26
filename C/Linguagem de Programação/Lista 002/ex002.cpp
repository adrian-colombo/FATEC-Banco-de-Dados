#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include <string.h>
#define TAM 5

/*
	Crie  uma  estrutura  representando  os  alunos  do  curso  de  Introdução  a Programação de Computadores.
	A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova e nota da segunda prova.
	a)Permita ao usuário entrar com os dados de 5 alunos. 
	b)Encontre o aluno com maior nota da primeira prova.
	c)Encontre o aluno com maior media geral.
	d)Encontre o aluno com menor media geral.
	e)Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6,0 para aprovação. 
*/

struct aluno{
	int matricula;
	char nome[80];
	float nota_1;
	float nota_2;
	float media;
	char resultado[10];	
};

main (){
	setlocale (LC_ALL, "");
	aluno a[TAM];
	int i, maiorNota, alunoMaiorMedia, alunoMenorMedia;
	float maior=0, maiorMedia=0, menorMedia=10;
	
	for(i=0;i<TAM;i++){
		printf("Registro do %dº Aluno:", i+1);
		printf("\nMatricula: ");
		scanf("%d",&a[i].matricula);
		fflush(stdin);
		printf("Nome: ");
		gets(a[i].nome);
		printf("Nota 1ª Prova: ");
		scanf("%f",&a[i].nota_1);
		printf("Nota 2ª Prova: ");
		scanf("%f",&a[i].nota_2);
		system("cls");
		a[i].media = (a[i].nota_1 + a[i].nota_2)/2;
	}
	
	for(i=0;i<TAM;i++){
		if(a[i].nota_1>maior){
			maior = a[i].nota_1;
			maiorNota=i;
		}
	}
	printf("Aluno que obteve a maior nota da primeira prova: %s", a[maiorNota].nome);
	
	for(i=0;i<TAM;i++){
		if(a[i].media>maiorMedia){
			maiorMedia = a[i].media;
			alunoMaiorMedia = i;
		}
	}
	printf("\nAluno que obteve a maior média: %s", a[alunoMaiorMedia].nome);

	for(i=0;i<TAM;i++){
		if(a[i].media<menorMedia){
			menorMedia = a[i].media;
			alunoMenorMedia = i;
		}
	}
	printf("\nAluno que obteve a menor média: %s\n\n", a[alunoMenorMedia].nome);
	
	for(i=0;i<TAM;i++){
		if (a[i].media>=6){
			strcpy(a[i].resultado, "aprovado");
			}else{
				strcpy(a[i].resultado, "reprovado");
			}
		printf("\nO aluno %s foi %s.", a[i].nome, a[i].resultado);
		
	}
	
}

