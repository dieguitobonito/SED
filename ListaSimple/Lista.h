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
//	void eliminarFinal(void);
//	void eliminarInicio(void);
	void insertarFinal(int);
	void insertarPosicion(int);
	void cantidadElementos(void);
	int cantidadElementosR(void);
	void eliminar(int);
};

#endif // LISTA_H
