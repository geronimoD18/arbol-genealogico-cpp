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

/*

hey bro, tengo una tarea en la cual tengo que completar un codigo para realizar un arbol genealogico. Te proporcionare el codigo fuente mas abajo. Mira el mandato:

"Tarea 6: Árbol Genealógico
Haga una aplicación que permita manejar el árbol genealógico de una familia.
Esta aplicación permitirá agregar así como desplegar el árbol completo.

- Figura 6.1. Menú principal
Arbol Genealogico

1- Crear árbol genealógico
2- Desplegar árbol genealógico
3- Salir
__________________________________

- Figura 6.2 Inserción de datos al árbol
Ingrese el nombre de la persona: Carlos
Digite la cantidad de hijos de Carlos: 2
Digite el nombre del hijo #1 de Carlos: Pedro
Digite el nombre del hijo #2 de Carlos: Juan
Digite la cantidad de hijos de Pedro: 0
Digite la cantidad de hijos de Juan: 1
Digite el nombre del hijo #1 de Juan: Lucas
Digite la cantidad de hijos de Lucas: 0
____________________________________________

- Figura 6.3. Impresión del árbol genealógico
Carlos es padre de: Pedro y Juan
Pedro no tiene hijos
Juan es padre de Lucas
Lucas no tiene hijos
"

*/