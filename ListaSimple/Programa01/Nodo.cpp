#include "Nodo.h"
#include "Alumno.h"

// Constructor predeterminado
Nodo::Nodo(){
    sig = nullptr;

}

// Constructor con parámetros dados
Nodo::Nodo(Alumno al, Nodo* sig){
	this->persona = al;
	this->sig = sig;
}
