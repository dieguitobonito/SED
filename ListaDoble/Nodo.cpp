#include "Nodo.h"

Nodo::Nodo(){
	Alumno();
	sig = nullptr;
	ant = nullptr;
}

Nodo::Nodo(Alumno dato, Nodo* ant, Nodo* sig){
	this->dato = dato;
	this->ant = ant;
	this->sig = sig;
}
