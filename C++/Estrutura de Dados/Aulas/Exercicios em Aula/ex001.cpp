#include <iostream>

using namespace std;

#define QTDNC 2

typedef struct {
	float real, imaginaria;
	} numcomplex;

void leNumComplex(numcomplex *nc) {
	cout << endl << "Parte Real: ";
	cin >> nc->real;
	cout << endl << "Parte Imaginaria: ";
	cin >> nc->imaginaria;
}

void escreveNumComplex(numcomplex nc) {
	cout << endl << "Numero Complexo: ";
	if ((nc.real != 0) || (nc.imaginaria == 0)) {
		cout << nc.real;
	}
	if (nc.imaginaria != 0) {
		if ((nc.imaginaria > 0) && (nc.real != 0)) {
			cout << "+" << nc.imaginaria;
		} else {
			cout << nc.imaginaria;
		}
		cout << "i";
	}
		cout << endl;
}

numcomplex somaNumComplex(numcomplex a, numcomplex b) {
	numcomplex resultado;
	resultado.real = a.real + b.real;
	resultado.imaginaria = a.imaginaria + b.imaginaria;
	
	return resultado;
}

numcomplex produtoNumComplex(numcomplex a, numcomplex b) {
	numcomplex resultado;
	resultado.real = (a.real * b.real) - (a.imaginaria * b.imaginaria);
	resultado.imaginaria = (a.real * b.imaginaria) + (b.real * a.imaginaria);
	return resultado;
}

void igualdadeNumComplex(numcomplex a, numcomplex b) {
	
	if (a.real == b.real && a.imaginaria == b.imaginaria){
		cout << "Sao iguais.";
	} else {
		cout << "Nao sao iguais.";
	}
}

numcomplex opostoNumComplex(numcomplex a, numcomplex b) {
	numcomplex resultado;
	resultado.real = -1*(a.real) + -1*(b.real);
	resultado.imaginaria = -1*(a.imaginaria) + -1*(b.imaginaria);
	return resultado;
}

numcomplex conjugadoNumComplex(numcomplex a, numcomplex b) {
	numcomplex resultado;
	resultado.real = (a.real + b.real);
	resultado.imaginaria = -1*(a.imaginaria) + -1*(b.imaginaria);
	return resultado;
}


int main(){
	int i;
	numcomplex vetorNC[QTDNC];
	numcomplex sNC, pNC;
	numcomplex oNC, cNC; // new
	
	for (i=0; i<QTDNC; i++) {
		cout << endl << "====================";
		cout << endl << i+1 << "o Numero Complexo";
		cout << endl << "====================" << endl;
		leNumComplex(&vetorNC[i]);
		escreveNumComplex(vetorNC[i]);
	}
		cout << endl << "====================" << endl;
		cout << endl << "====================";
		cout << endl << "Soma";
		cout << endl << "====================" << endl;
		sNC = somaNumComplex(vetorNC[0], vetorNC[1]);
		escreveNumComplex(sNC);
		cout << endl << "====================" << endl;
		cout << endl << "====================";
		cout << endl << "Produto";
		cout << endl << "====================" << endl;
		pNC= produtoNumComplex(vetorNC[0], vetorNC[1]);
		escreveNumComplex(pNC);
		cout << endl << "====================" << endl;
		
		//new
		cout << endl << "====================" << endl;
		cout << endl << "====================";
		cout << endl << "Igualdade";
		cout << endl << "====================" << endl;
		igualdadeNumComplex(vetorNC[0], vetorNC[1]);
		
		cout << endl << "====================" << endl;
		cout << endl << "====================";
		cout << endl << "Oposto";
		cout << endl << "====================" << endl;
		oNC = opostoNumComplex(vetorNC[0], vetorNC[1]);
		escreveNumComplex(oNC);
		
		cout << endl << "====================" << endl;
		cout << endl << "====================";
		cout << endl << "Conjugado";
		cout << endl << "====================" << endl;
		cNC = conjugadoNumComplex(vetorNC[0], vetorNC[1]);
		escreveNumComplex(cNC);
		return 0;
		}
