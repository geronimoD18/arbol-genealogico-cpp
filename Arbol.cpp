#include "Arbol.h"
#include <iostream>

Arbol::Arbol() : _raiz(NULL)
{
}

void Arbol::IniciarProceso()
{
	_ultimoNodo = NULL;
	_primerNodo = NULL;
}

void Arbol::Procesar(Nodo *nodo)
{
	if (_primerNodo == NULL)
	{
		_primerNodo = nodo;
		_ultimoNodo = nodo;
	}
	else
	{
		_ultimoNodo->SetSiguiente(nodo);
		_ultimoNodo = nodo;
	}
}

void Arbol::Recorrer()
{
	Recorrer(_raiz);
}

// Implementar este método
void Arbol::Recorrer(Nodo *nodo)
{
	// La primera línea de código de este método debe llamar al método procesar
	Procesar(nodo);

	// Escribir aqui el código de su implementación de recorrer el árbol
}

Nodo *Arbol::GetNodo(int indice)
{
	Nodo *nodo = _primerNodo;
	int i = 0;
	while (nodo != NULL)
	{
		if (i == indice)
		{
			return nodo;
		}
		nodo = nodo->GetSiguiente();
		i++;
	}
	return NULL;
}

Arbol::Arbol(Nodo *raiz) : _raiz(raiz), _primerNodo(NULL), _ultimoNodo(NULL)
{
}

Arbol::~Arbol()
{
}

// Este método corresponde a la clase NODO
// Implementar este método
void Nodo::AgregarHijo(Nodo *hijo)
{
	// Este método le agrega un hijo a este nodo del arbol
}

// modification by Geronimo on Monday, July 31, 2023
