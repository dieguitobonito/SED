#include "ListaDoble.h"
#include <iostream>
using namespace std;

ListaDoble::ListaDoble(){
	h = new Nodo;
	t = new Nodo;
	h->sig = t;
	t->ant = h;
}

// Será que necesitan apuntar al mismo nodo?
ListaDoble::ListaDoble(Nodo* sig, Nodo* ant ){
	this->h = sig;
	this->t = ant;
}

void ListaDoble::insertar(Alumno al, unsigned int pos){
	Nodo* aux = new Nodo(al, nullptr, nullptr);
	if(vacia()){
		cout << "La lista no está inicializada" << endl;
	}
	else{
		// Recorriendo a posición
		// -1 porque la lista se
		// muestra con un adelanto
		aux = h;
		unsigned int cont = pos;
		while(cont - 1 > 0){
			cont--;
			aux->ant = aux;
			aux->sig = aux->sig;
			aux = aux->sig;
		}
		// Insertando al final
		if(aux->sig == nullptr){
			aux->ant->sig = aux;
			
			
			
		}
		if(aux->ant == nullptr){
			aux->ant = 
		}

	}
}

void ListaDoble::eliminar(unsigned int pos){
	cout << "Impleméntame" << endl;
}

void ListaDoble::eliminarTodo(void){
	cout << "Impleméntame" << endl;
}

Nodo* ListaDoble::buscar(Alumno al){
	cout << "Impleméntame" << endl;
	Nodo* aux;
	return aux;
}

void ListaDoble::inicializa(void){
	ListaDoble();
}

bool ListaDoble::vacia(void){
	bool vacia = true;
	if(h->sig && t->ant){
		vacia = false;
	}
	return vacia;
}

Nodo* ListaDoble::primero(void){
	cout << "Impleméntame" << endl;
	Nodo* aux;
	return aux;
}

Nodo* ListaDoble::ultimo(void){
	cout << "Impleméntame" << endl;
	Nodo* aux;
	return aux;
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
