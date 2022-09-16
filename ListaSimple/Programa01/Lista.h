#ifndef LISTA_H
#define LISTA_H

#include "Alumno.h"
#include <iostream>
#include "string.h"

using namespace std;

class Lista{
    public:
        Nodo* h;

	// Constructores
	Lista();
        Lista(Nodo*);

        // Métodos	
        void insertarInicio(string, int);
	void insertarFinal(string, int);
	void insertarPos(int, string, int);
	void eliminar(string, int);
	void eliminarTodo(void);
	void buscar(string, int);
	void inicializa(void);
	bool vacía(void);
	void primero(void);
	void ultimo(void);
	int tamaño(void);
	void siguiente(string, int);
	void anterior(string, int);
	void mostrarTodo(void);
};

#endif // LISTA_H
