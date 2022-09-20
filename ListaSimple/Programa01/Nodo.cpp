#include "Alumno.h"

// Constructor predeterminado
Alumno::Alumno(){
    nombre = "";
    edad = 0;
    sig = nullptr;

}

// Constructor con parámetros dados
Alumno::Alumno(string nombre, int edad, Alumno* sig){
	this-> nombre = nombre;
	this->edad = edad;
	this->sig = sig;
}
