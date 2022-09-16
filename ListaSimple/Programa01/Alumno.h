#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>

class Alumno{
	public:
		string nombre;
		int edad;
		Nodo* sig;

		// Constructores
		Nodo();
		Nodo(string, int, Nodo*);
};

#endif // ALUMNO_H
