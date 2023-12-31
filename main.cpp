#include "Arbol.h"
#include <iostream>
#include <string>

using namespace std;
Arbol *arbol = new Arbol();

bool Listar()
{
    arbol->IniciarProceso();
    if (arbol->GetRaiz())
    {
        arbol->Recorrer();
    }

    cout << endl
         << endl;
    int i = 1;
    Nodo *nodo = arbol->GetPrimerNodo();
    while (nodo != NULL)
    {
        cout << i << "- " << nodo->GetNombre() << endl;
        nodo = nodo->GetSiguiente();
        i++;
    }
    if (i == 1)
    {
        cout << endl
             << "** Arbol vacio **" << endl;
        return false;
    }
    cout << endl
         << endl;
    return true;
}

void Introducir()
{
    string nombre;
    if (Listar())
    {
        int indice;
        cout << "Seleccione el nodo al cual desea agregar un hijo => ";
        cin >> indice;
        cin.ignore();
        Nodo *nodo = arbol->GetNodo(indice - 1);
        if (!nodo)
        {
            cout << endl
                 << "*** Indice invalido ***" << endl;
            return;
        }

        cout << "Introduzca el nombre del nodo a agregarle a " << nodo->GetNombre() << ": ";
        getline(cin, nombre);
        nodo->AgregarHijo(new Nodo(nombre));
    }
    else
    {
        cout << "Introduzca el nombre del nodo raiz: ";
        getline(cin, nombre);
        arbol->SetRaiz(new Nodo(nombre));
    }

    cout << "-- Nodo Agregado --" << endl;
    cout << endl;
}

void MostrarMenu()
{
    int opcion = 0;
    do
    {
        cout << endl;
        cout << "1- Agregar nodo al Arbol Genealogico" << endl;
        cout << "2- Visualizar Arbol Genealogico" << endl;
        cout << "3- Salir" << endl;
        cout << "Elija una opcion => ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            Introducir();
            break;
        case 2:
            Listar();
            break;
        case 3:
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    } while (opcion != 3);
}

int main()
{
    MostrarMenu();
    return 0;
}

// modification by Geronimo on Monday, July 31, 2023