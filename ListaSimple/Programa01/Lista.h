#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include "Alumno.h"
#include <iostream>
#include <string>
using namespace std;

class Lista{
    public:
        Nodo* h;

	// Constructores
	Lista();
        Lista(Nodo*);

        // Métodos
        void insertarInicio(Alumno);
        void imprimirTodo(void);
	// Comparar ambos datos de alumno
	void eliminar(Alumno);
	Nodo* buscar(Alumno); 
	// Mandar h
	void inicializar(void);
	void vacia(void);
	Alumno primero(void);

	// void insertarPosicion(int);
//	void cantidadElementos(void);
//	int cantidadElementosR(void);
};

#endif // LISTA_H
