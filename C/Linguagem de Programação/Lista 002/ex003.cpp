#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define TAM 50

/*
		Fazer um programa para simular uma agenda de telefones. Para cada pessoa deverá constar os seguintes dados: 
		• Código  • Nome  • E-mail  • Endereço (contendo campos para Rua, numero, complemento, bairro, cep, cidade, estado, país).
		• Telefone (contendo campo para DDD e numero)  • Data de aniversario (contendo campo para dia, mês, ano).
		• Observações: Uma linha (string) para alguma observação especial.
		a)Definir a estrutura acima.  b)Declarar a variável agenda (vetor) com capacidade de agendar até 50 cadastros. c)Possibilitar a visualização dos dados.
*/

struct dadosEndereco{
	char rua[40];
	char numero[5];
	char complemento[20];
	char bairro[40];
	int cep;
	char cidade[30];
	char estado[2];
	char pais[20];	
};

struct dadosTelefone{
	char ddd[3];
	char numero[9];
};

struct dadosData{
	int dia;
	int mes;
	int ano;
};

struct dados{
	int codigo;
	char nome[80];
	char email[80];
	dadosEndereco endereco;
	dadosTelefone telefone;
	dadosData data;
	char observacao[80];	
};

main (){
	setlocale (LC_ALL, "");
	dados agenda[50];
	int i;
	
	for(i=0;i<TAM;i++){
		printf("%dº Registro:", i+1);
		printf("\nCódigo: ");
		scanf("%d",&agenda[i].codigo);
		printf("Nome: ");
		fflush(stdin);
		gets(agenda[i].nome);
		printf("Email: ");
		gets(agenda[i].email);
		
		// Registro do Endereço
		printf("Rua: ");
		gets(agenda[i].endereco.rua);
		printf("Numero: ");
		gets(agenda[i].endereco.numero);
		printf("Complemento: ");
		gets(agenda[i].endereco.complemento);
		printf("Bairro: ");
		gets(agenda[i].endereco.bairro);
		printf("CEP: ");
		scanf("%d",&agenda[i].endereco.cep);
		printf("Cidade: ");
		fflush(stdin);
		gets(agenda[i].endereco.cidade);
		printf("Estado: ");
		gets(agenda[i].endereco.estado);
		printf("País: ");
		gets(agenda[i].endereco.pais);
		
		// Registro do Telefone
		printf("DDD: ");
		gets(agenda[i].telefone.ddd);
		printf("Número do Telefone: ");
		gets(agenda[i].telefone.numero);
		
		// Registro do Ano de Nascimento
		printf("Dia de aniversário: ");
		scanf("%d", &agenda[i].data.dia);
		printf("Mês de aniversário: ");
		scanf("%d", &agenda[i].data.mes);
		printf("Ano de nascimento: ");
		scanf("%d", &agenda[i].data.ano);
		
		// Registro da Obs.
		printf("Observações: ");
		fflush(stdin);
		gets(agenda[i].observacao);
		system("cls");
	}
	
	for(i=0;i<TAM;i++){
		printf("%dª Pessoa: ", i+1);
		printf("\nCódigo: %d\nNome: %s\nEmail: %s", agenda[i].codigo, agenda[i].nome, agenda[i].email);
		printf("\nRua: %s\nNumero: %s\nComplemento %s\nBairro %s\nCEP %d\nCidade %s\nEstado %s\nPaís: %s", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
		printf("\nTelefone: (%s) %s", agenda[i].telefone.ddd, agenda[i].telefone.numero);
		printf("\nData de Nascimento: %d/%d/%d", agenda[i].data.dia, agenda[i].data.mes, agenda[i].data.ano);
		printf("\nObsservação: %s\n\n", agenda[i].observacao);
	}
	
	
}

