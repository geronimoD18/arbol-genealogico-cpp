#ifndef NODO_H_
#define NODO_H_
#include <string>

class Nodo
{
public:
	Nodo(std::string nombre) : _primerHijo(NULL), _ultimoHijo(NULL), _siguienteHijo(NULL), _siguiente(NULL) { _nombre = nombre; }
	virtual ~Nodo();
	void SetNombre(std::string nombre) { _nombre = nombre; }
	std::string GetNombre() { return _nombre; }
	Nodo *GetPrimerHijo() { return _primerHijo; }
	void SetPrimerHijo(Nodo *primerHijo) { _primerHijo = primerHijo; }
	Nodo *GetUltimoHijo() { return _ultimoHijo; }
	void SetUltimoHijo(Nodo *hijo) { _ultimoHijo = hijo; }
	Nodo *GetSiguienteHijo() { return _siguienteHijo; }
	void SetSiguienteHijo(Nodo *siguienteHijo) { _siguienteHijo = siguienteHijo; }
	Nodo *GetSiguiente() { return _siguiente; }
	void SetSiguiente(Nodo *siguiente) { _siguiente = siguiente; }
	void AgregarHijo(Nodo *hijo);

private:
	std::string _nombre;
	Nodo *_primerHijo;
	Nodo *_ultimoHijo;
	Nodo *_siguienteHijo;

	Nodo *_siguiente;
};

#endif

// modification by Geronimo on Monday, July 31, 2023