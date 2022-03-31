#include <iostream>
using namespace std;
#define MAXELEM 3


typedef int TInfo;
typedef struct TFila {
TInfo elem[MAXELEM];
// de 1 ate MAXELEM
int inicio;
// de 1 ate MAXELEM 
int fim;
// de 0 ate MAXELEM
int quantidade;
} TFila;

void iniciaFila(TFila *f) {
f->inicio = 1;
f->fim = MAXELEM;
f->quantidade = 0;
}


int insereFila(TFila *f, TInfo var) {
if (f->quantidade == MAXELEM) { return 0;
} else {
f->fim = (f->fim % MAXELEM) + 1; f->elem[f->fim-1] = var;
f->quantidade = f->quantidade + 1;
return 1;
}
}


int retiraFila(TFila *f, TInfo *var) {
	if (f->quantidade == 0){
		return 0;
	}
	else {
		*var = f->elem[f->inicio - 1];
		f->inicio = f->inicio + 1;
		f->quantidade = f->quantidade - 1;
		return 1;
	}
}


int main() {
TFila fila;
TInfo v;
cout << endl;
iniciaFila(&fila);
if (retiraFila(&fila, &v)) {
cout << "Valor retirado da fila: " << v << endl;
} else {
cout << "Fila vazia." << endl;
}
if (insereFila(&fila, 1)) {
cout << "Valor 1 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
}
if (insereFila(&fila, 2)) {
cout << "Valor 2 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
}
if (insereFila(&fila, 3)) {
cout << "Valor 3 inserido." << endl;
} else {
cout << "Fila cheia." << endl;
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

