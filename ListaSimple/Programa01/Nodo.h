#ifndef NODO_H
#define NODO_H
#include <string>
#include "Alumno.h"

// Para que se puedan utilizar std::string
using namespace std;

class Nodo{
	public:
		Alumno persona;
		Nodo* sig;

		// Constructores
		Nodo();
		Nodo(Alumno, Nodo*);
};

#endif // NODO_H
