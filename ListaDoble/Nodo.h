#ifndef NODO_H
#define NODO_H

#include "Alumno.h"

class Nodo{
	public:
		Alumno dato;
		Nodo* sig;
		Nodo* ant;

		Nodo();
		Nodo(Alumno, Nodo*, Nodo*);
};
#endif
