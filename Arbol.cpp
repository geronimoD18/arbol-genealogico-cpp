// ARBOL GENEALOGICO - TAREA 6 ESTRUCTURA DE DATOS ITLA

#include "Arbol.h"
#include <iostream>
#include <stack>

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

void Arbol::Recorrer(Nodo *nodo)
{
	Procesar(nodo);

	std::cout << nodo->GetNombre() << std::endl;
	
	if (nodo->GetUltimoHijo() != NULL) {
		Nodo* i = nodo->GetPrimerHijo();

		while (i != NULL) {
			Recorrer(i);
			i = i->GetSiguienteHijo();
		}
	}
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

void Nodo::AgregarHijo(Nodo *hijo)
{
	if (hijo != NULL) {
		if (_primerHijo == NULL) {
			_primerHijo = hijo;
			_ultimoHijo = hijo;
		}
		else {
			_ultimoHijo->SetSiguienteHijo(hijo);
			_ultimoHijo = hijo;
		}
	}
}

// MODIFIED BY GERO ON TUE, AUG 01, 2023
