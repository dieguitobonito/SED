#include "Alumno.h"

// Constructor predeterminado
Alumno::Alumno(){
    nombre = "";
    edad = 0;
    sig = nullptr;

}

// Constructor con parámetros dados
Nodo::Nodo(string nombre, int edad, Nodo* sig){
	this-> nombre = nombre;
	this->edad = edad;
	this->sig = sig;
}
