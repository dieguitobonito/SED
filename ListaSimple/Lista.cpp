#include "Lista.h"

// Constructor por defecto
Lista::Lista(){
	h = nullptr;
}

Lista::Lista(Nodo* sigPos){
	this->h = sigPos;
}

void Lista::insertarInicio(int d){
	Nodo* aux = new Nodo(d, nullptr);
	
	if(h == nullptr){
		h = aux;
	}
	else{
		aux->sig = h;
		h = aux;
	}
}

void Lista::imprimirTodo(void){
	Nodo* aux = h;

	// Puede representarse como 'aux == nullptr'
	if(!aux){
		cout<< "No hay lista!" << endl;
	}
	else{
		// Mientras aux tenga un valor
		while(aux){
			cout<< aux->dato << endl;
			aux = aux->sig;
		}
	}
}
