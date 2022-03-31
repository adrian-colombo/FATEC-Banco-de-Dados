#include <iostream>
using namespace std;
#define MAX 3

typedef	int TInfo;
typedef struct TFila {
TInfo elem[MAX];
int inicio=0;
int fim=0;
} TFila;

TFila fila;


int insereFila(int i) {
	if (fila.fim+1 == fila.inicio || (fila.fim+1== MAX && !fila.inicio)) {
		return 0;
	} else {
		fila.elem[fila.fim] = i;
		fila.fim++;
		return 1;
	}
	
	if (fila.fim == MAX) {
		fila.fim = 0;
	}
}

int retiraFila (TFila f, TInfo var){
	if (fila.inicio == MAX) {
		fila.inicio = 0;
	} 
	
	if (fila.inicio == fila.fim){
		return 0;
	} else{
		fila.inicio +1;
		var = fila.elem[fila.inicio - 1];
		fila.inicio = fila.inicio + 1;
		return 1;
	}
}


int main() {
TFila fila;
TInfo v;
cout << endl;
if (insereFila(1)) {
cout << "Valor 1 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
}
if (insereFila(2)) {
cout << "Valor 2 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
}
if (insereFila(3)) {
cout << "Valor 3 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
}
if (insereFila(4)) {
cout << "Valor 4 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
}

if (retiraFila(&fila, &v)) {
cout << "Valor retirado da fila: " << v << endl;
} else {
cout << "Fila vazia." << endl;
}
if (retiraFila(&fila, &v)) {
cout << "Valor retirado da fila: " << v << endl;
} else {
cout << "Fila vazia." << endl;
}
if (insereFila(&fila, 4)) {
cout << "Valor 4 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
}
if (retiraFila(&fila, &v)) {
cout << "Valor retirado da fila: " << v << endl;
} else {
cout << "Fila vazia." << endl;
}
if (retiraFila(&fila, &v)) {
cout << "Valor retirado da fila: " << v << endl;
} else {
cout << "Fila vazia." << endl;
}
if (retiraFila(&fila, &v)) {
cout << "Valor retirado da fila: " << v << endl;
} else {
cout << "Fila vazia." << endl;
}
return 0;
}

