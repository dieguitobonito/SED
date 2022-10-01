#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "Nodo.h"

class ListaDoble{
	public:
		Nodo* h;
		Nodo* t;

		ListaDoble();
		ListaDoble(Nodo*, Nodo*);

		void insertar(Alumno, unsigned int);
		void eliminar(unsigned int);
		void eliminarTodo(void);
		Nodo* buscar(Alumno);
		void inicializa(void);
		bool vacia(void);
		Nodo* primero(void);
		Nodo* ultimo(void);
		unsigned int tamaño(void);
		Nodo* siguiente(Alumno);
		Nodo* anterior(Alumno);
		void mostrarTodo(void);
};
#endif 
