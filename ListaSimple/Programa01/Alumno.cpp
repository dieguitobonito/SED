#include <string>
#include "Alumno.h"

using namespace std;

// Constructor predeterminado
Alumno::Alumno(){
	edad = 0;
	nombre = "";
}

// Constructor por parámetros
Alumno::Alumno(int edad, string nombre){
	this->edad = edad;
	this->nombre = nombre;
}
