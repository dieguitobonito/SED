#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "NodoDoble.h"
#include "Alumno.h"
#include <iostream>
#include <string>
using namespace std;

class Lista{
    public:
        Nodo* h;
	Nodo* t;

	// Constructores
	Lista();
        Lista(Nodo*, Nodo*);

        // Métodos
        void insertarInicio(Alumno);
	void insertarFinal(Alumno);
	void insertarPos(Alumno, int);
	void eliminar(Alumno);
	void eliminarTodo(void);
	// Comparar ambos datos de alumno
	void buscar(Alumno); 
	// Mandar header
	void inicializa(void);
	void vacia(void);
	void primero(void);
	void ultimo(void);
	void tamaño(void);
	void siguiente(Alumno);
	void anterior(Alumno);
        void mostrarTodo(void);
};

#endif // LISTADOBLE_H
