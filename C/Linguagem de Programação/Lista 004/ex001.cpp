#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<string.h>
#define TAM 5

/*
	1.	Faça um programa em C que receba uma frase qualquer fornecida pelo usuário, calcule e mostre quantos caracteres a frase possui.
	2.	Faça um programa em C em que um procedimento receba uma frase do usuário e mostre a frase, palavra por palavra, uma em cada linha diferente.
	3.	Crie um procedimento que receba por parâmetro uma string, e exiba cada letra em uma linha diferente, porém tudo em maiúsculo.
	4.	Faça um programa em C que receba uma frase do usuário e mostre a frase inversamente (usar for).
	5.	Faça uma função que conta o número de ocorrências de um caractere numa string (usar for).
	6.	Crie uma struct chamada pessoa com os dados: nome e cpf. Crie um vetor para armazenar 5 pessoas. Elabore um procedimento para preencher o vetor, outro procedimento para exibir os nomes e cpfs cadastrados e, por fim, um procedimento para exibir se existe algum cpf repetido ou não.
*/

	int i;
void separaPalavras(char frase[]){
	for(i=0;i<strlen(frase);i++){
		if (frase[i] == ' '){
			printf("\n");
		} else{
			printf("%c", frase[i]);
		}
	}
}

void separaLetras(char frase[]){
	strupr(frase);
	for(i=0;i<strlen(frase);i++){
		printf("%c\n", frase[i]);
	}
}

char separaPalavras(){
	char frase[100];
	int j;
	int contadorAlfa[26] = {0}, contadorEspaco = 0;
	printf("Digite uma frase: ");
	fflush(stdin);
	gets(frase);
	
	for(i=0;i<strlen(frase);i++){
		if(frase[i] >= 'A' && (frase[i] <= 'Z')){
			j = frase[i] - 'A';
			contadorAlfa[j]++;
		} else if(frase[i] >= 'a' && (frase[i] <= 'z')){
			j = frase[i] - 'a';
			contadorAlfa[j]++;
		} else if (frase[i] == ' '){
			contadorEspaco++;
		}
	}
	
	for(i=0;i<26;i++){
		if(contadorAlfa[i] !=0){
			printf("\n%c - %d", ('A'+i), contadorAlfa[i]);
		}
	}
	printf("\n%d espaços em brancos", contadorEspaco);
}

struct pessoa{
	char nome[100];
	char cpf[11];
};

struct pessoa dadosPessoa[TAM];

void preenchePessoa(){
	for(i=0;i<TAM;i++){
		printf("Cadastro da %dº Pessoa:\n\n", i+1);
		printf("Nome: ");
		fflush(stdin);
		gets(dadosPessoa[i].nome);
		printf("CPF: ");
		gets(dadosPessoa[i].cpf);
		system("cls");
	}
}

void exibePessoa(){
	for(i=0;i<TAM;i++){
		printf("%s - %s\n", dadosPessoa[i].nome, dadosPessoa[i].cpf);
		}
}

void identificaCPF(){
	int j;
	int repete=0;
	for(i=0;i<TAM;i++){
		for (j=i+1;j<5;j++){
			if(strcmp(dadosPessoa[i].cpf, dadosPessoa[j].cpf) == 0){
				repete++;
			}
		}
	}
	
	if (repete > 0){
		printf("\nAlgum CPF se repete.");
		} else {
			printf("\nNenhum CPF se repete.");
		}
}


main (){
	setlocale (LC_ALL, "");
	int op;
	int tamanho;
	char frase[100];	
	do{
		printf("0. Sair\n");
		printf("1. Conte quantos caracteres a frase possui\n");
		printf("2. Separe uma palavra em cada linha\n");
		printf("3. Separe letras e transforme em maiúsculas\n");
		printf("4. Inverta a frase\n");
		printf("5. Conte o número de ocorrências de uma frase\n");
		printf("6. Identifica CPF igual\n");
		printf("Escolha uma das opções: ");
		scanf("%d",&op);
			switch (op){
				case 1: 
					system("cls");
					printf("Digite uma frase: ");
					fflush(stdin);
					gets(frase);
					tamanho = strlen(frase);
					printf("A frase '%s' possui %d caracteres.", frase, tamanho);
					printf("\n\n");
					system("pause");
					system("cls");
					break;

				case 2:
					system("cls");
					printf("Digite uma frase: ");
					fflush(stdin);
					gets(frase);
					separaPalavras(frase);
					printf("\n\n");
					system("pause");
					system("cls");
					break;
				case 3:
					system("cls");
					printf("Digite uma frase: ");
					fflush(stdin);
					gets(frase);
					separaLetras(frase);
					printf("\n\n");
					system("pause");
					system("cls");
					break;
				case 4:
					system("cls");
					printf("Digite uma frase: ");
					fflush(stdin);
					gets(frase);
					
					for(i=strlen(frase);i>=0;i--){
						printf("%c", frase[i]);
					}
					
					printf("\n\n");
					system("pause");
					system("cls");
					break;
				case 5:
					system ("cls");
					separaPalavras();
					printf("\n\n");
					system("pause");
					system("cls");
					break;
				case 6:
					system ("cls");
					preenchePessoa();
					exibePessoa();
					identificaCPF();
					printf("\n\n");
					system("pause");
					system("cls");
					break;
			}
	} while(op!=0);

}

