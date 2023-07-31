#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"

class Arbol
{
private:
	Nodo *_raiz;

	Nodo *_primerNodo;
	Nodo *_ultimoNodo;

	void Procesar(Nodo *nodo);

public:
	void IniciarProceso();
	void Recorrer();
	void Recorrer(Nodo *nodo);
	Arbol(Nodo *raiz);
	Arbol();
	virtual ~Arbol();
	Nodo *GetPrimerNodo() { return _primerNodo; }
	void SetRaiz(Nodo *raiz) { _raiz = raiz; }
	Nodo *GetRaiz() { return _raiz; }

	Nodo *GetNodo(int indice);
};

#endif

// modification by Geronimo on Monday, July 31, 2023