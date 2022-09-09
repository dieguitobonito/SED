#include "Nodo.h"

// Constructor predeterminado
Nodo::Nodo(){
    dato = 0;
    sig = nullptr;

}

Nodo::Nodo(int dato, Nodo* sig){
    this->dato = dato;
    this->sig = sig;
}
