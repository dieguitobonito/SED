#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista{
    public:
        Nodo* h;

	// Constructores
	Lista();
        Lista(Nodo*);

        // Métodos
        void insertarInicio(int);
        void imprimirTodo(void);
	void eliminarFinal(void);
	void insertarFinal(int);
};

#endif // LISTA_H
