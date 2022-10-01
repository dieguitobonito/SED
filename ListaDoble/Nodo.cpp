#include "Nodo.h"

Nodo::Nodo(){
	Alumno();
	sig = nullptr;
	ant = nullptr;
}

Nodo::Nodo(Alumno niño, Nodo* ant, Nodo* sig){
	this->niño = niño;
	this->ant = ant;
	this->sig = sig;
}
