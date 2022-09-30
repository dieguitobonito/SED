#include "Animal.h"
#include <string>

using namespace std;

// Constructor predeterminado
Alumno::Alumno(){
    	nombre = "";
    	edad = 0;
	id = 0;
}

Alumno::Alumno(string nombre, int edad, unsigned int id){
	this->nombre = nombre;
    	this->edad = edad;
	this->id = id;
}
