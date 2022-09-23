#include "Nodo.h"

// Constructor predeterminado
Nodo::Nodo(){
    dato.nombre = "";
    dato.edad = 0;
    sig = nullptr;

}

Nodo::Nodo(Alumno chiquillo, Nodo* sig){
    this->niño = chiquillo;
    this->sig = sig;
}
