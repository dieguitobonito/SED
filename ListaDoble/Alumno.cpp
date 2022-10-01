#include "Alumno.h"

Alumno::Alumno(){
	nombre = "fulanito";
	edad = 0;
}

Alumno::Alumno(string nombre, unsigned int edad){
	this->nombre = nombre;
	this->edad = edad;
}
