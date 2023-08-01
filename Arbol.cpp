// ARBOL GENEALOGICO - TAREA 6 ESTRUCTURA DE DATOS ITLA

#include "Arbol.h"
#include <iostream>
#include <queue>

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
    std::queue<Nodo*> nodosQueue;
    nodosQueue.push(_raiz);

    while (!nodosQueue.empty()) {
        Nodo* current = nodosQueue.front();
        nodosQueue.pop();

        Procesar(current);

        std::cout << current->GetNombre() << std::endl;

        Nodo* child = current->GetUltimoHijo();
        while (child != NULL) {
            nodosQueue.push(child);
            child = child->GetSiguienteHijo();
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
	if (hijo != NULL)
	{
		_primerHijo = (_primerHijo == NULL) ? hijo : _primerHijo;
		_ultimoHijo = hijo;
	}
}

// MODIFIED BY GERO ON TUE, AUG 01, 2023
