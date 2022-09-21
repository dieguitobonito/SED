#include "Nodo.h"
#include "Alumno.h"

// Constructor predeterminado
Nodo::Nodo(){
    m_sig = nullptr;

}

// Constructor con parámetros dados
Nodo::Nodo(Alumno al, Nodo* sig){
	m_niño = al;
	m_sig = sig;
}
