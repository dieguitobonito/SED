#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
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
	
        void insertarInicio(Alumno); // 1 yes
//	void insertarFinal(string, int); // 2 
//	void insertarPos(int, string, int); // 3
//	void eliminar(string, int); // 4
//	void eliminarTodo(void); // 5
//	void buscar(string, int); // 6
//	void inicializa(void); // 7
//	bool vacía(void); // 8
//	void primero(void); // 9
//	void ultimo(void); // 10
//	int tamaño(void); // 11
//	void siguiente(string, int); // 12
//	void anterior(string, int); // 13
	void mostrarTodo(void); // 14
};

#endif // LISTA_H
