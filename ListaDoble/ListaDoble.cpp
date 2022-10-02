#include "ListaDoble.h"
#include <iostream>
#include <string>
using namespace std;

ListaDoble::ListaDoble(){
	h = new Nodo;
	t = new Nodo;
	h->sig = t;
	t->ant = h;
}

ListaDoble::ListaDoble(Nodo* sig, Nodo* ant ){
	this->h = sig;
	this->t = ant;
}

// Actualizar conforme a buscar
void ListaDoble::insertar(Alumno al, Nodo* pos){
	Nodo* aux = new Nodo(al, nullptr, nullptr);
	Nodo* rem = pos;

	aux->sig = rem;
	aux->ant = rem->ant;
	// rem->ant->sig y rem->ant apuntarán a aux
	rem->ant->sig = rem->ant = aux;
}

void ListaDoble::eliminar(unsigned int pos){
	cout << "Impleméntame" << endl;
}

void ListaDoble::eliminarTodo(void){
	cout << "Impleméntame" << endl;
}

Nodo* ListaDoble::buscar(string nom, string ed){
	Nodo* dir;
	dir = h;
	// Iterando por la lista
	while(dir->dato.nombre == nom && dir->dato.ed == al.edad){
		dir = dir->sig;
	}
	return aux;
}

void ListaDoble::inicializa(void){
	ListaDoble();
}

bool ListaDoble::vacia(void){
	// Retorna true si se cumple
	return (h->sig == t);
}

Nodo* ListaDoble::primero(void){
	cout << "Impleméntame" << endl;
	Nodo* aux;
	return aux;
}

Nodo* ListaDoble::ultimo(void){
	if(t->ant == t){
		return nullptr;
	}
	return t;
}

unsigned int ListaDoble::tamaño(void){
	unsigned int tam = 0;
	Nodo* aux;
	
	aux = h;

	while(aux){
		tam++;
		aux = aux->sig;
	}
	
	return tam;
}

Nodo* ListaDoble::siguiente(Alumno al){
	cout << "Impleméntame" << endl;
	Nodo* aux;
	return aux;
}

Nodo* ListaDoble::anterior(Alumno al){
	cout << "Impleméntame" << endl;
	Nodo* aux;
	return aux;
}

void ListaDoble::mostrarTodo(void){
	Nodo* aux;
	unsigned int numlista = 0;
	if(vacia()){
		cout << "No hay lista" << endl;
	}
	else{
		aux = h;
		while(aux){
			numlista++;
			cout << numlista;
			cout << ".- ";
			cout << aux->niño.nombre;
			cout << ", ";
			cout << aux->niño.edad << endl;
			aux = aux->sig;
		}
	}
}
