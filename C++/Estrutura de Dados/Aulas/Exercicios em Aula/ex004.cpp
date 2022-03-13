#include <iostream>
using namespace std;
#define DEBUG 0
#define MAX 100

typedef int TChave;
typedef char TInfo[255];

typedef struct {
TChave chave;
TInfo info;
}TDado;

typedef TDado TVetor[MAX];
void mostra(TVetor v, int n) {
int i;
if (DEBUG) {
cout << endl << "----------" << endl;
for (i=0; i<n; i++) {
cout << i << ": " << v[i].chave << " " << v[i].info << endl;
}

cout << "----------";
}
}

void ordena(TVetor v, int n) {
int i, j;
TDado x;
mostra(v, n);
for (i=0; i<n; i++) {
for (j=n-1; j>=i; j--) {
if (v[j+1].chave > v[j].chave) {
x = v[j+1];
v[j+1] = v[j];
v[j] = x;
}
mostra(v, n);
}
}
mostra(v, n);
}

int main() {
FILE *arquivo;
TVetor v;
int n, i;
cout << endl << "Abrindo Arquivo...";
arquivo = fopen("E:\\Adrian\\Documents\\GitHub\\FATEC-Banco-de-Dados\\C++\\Estrutura de Dados\\Aulas\\Exercicios em Aula\\ordenar.txt", "rt");
if (!arquivo) {
cout << endl << "Erro!" << endl;
return 1;
}

cout << endl << "Arquivo Aberto!" << endl;
cout << endl << "Carregando Dados...";
i = 0;
while (!feof(arquivo) && (i<MAX)) {
fscanf(arquivo, "%d,%s", &v[i].chave, v[i].info);
i++;
}

n = i;
if (!feof(arquivo)) {
cout << endl << "Erro!" << endl;
return 2;
}

cout << endl << "Dados Carregados!" << endl;
cout << endl << "Fechando Arquivo...";
fclose(arquivo);
cout << endl << "Arquivo Fechado!" << endl;
cout << endl << "Ordenando...";
ordena(v, n);
cout << endl << "Ordenado!" << endl;
cout << endl << "Abrindo Arquivo...";
arquivo = fopen("./ordenado.txt", "wt");

if (!arquivo) {
cout << endl << "Erro!" << endl;
return 3;
}

cout << endl << "Arquivo Aberto!" << endl;
cout << endl << "Armazenando Dados...";
for (i=0; i<n; i++) {
fprintf(arquivo, "%d,%s\n", v[i].chave, v[i].info);
}

cout << endl << "Dados Armazenados!" << endl;
cout << endl << "Fechando Arquivo...";
fclose(arquivo);
cout << endl << "Arquivo Fechado!" << endl;
return 0;
}
