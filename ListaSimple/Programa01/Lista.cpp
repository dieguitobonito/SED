#include "Lista.h"

// Constructor por defecto
Lista::Lista(){
	h = nullptr;
}

Lista::Lista(Nodo* sigPos){
	this->h = sigPos;
}

void Lista::insertarInicio(Alumno al){
	Nodo* aux = new Nodo(al, nullptr);
	
	if(h == nullptr){
		h = aux;
	}
	else{
		aux->sig = h;
		h = aux;
	}
}

void Lista::insertarFinal(Alumno al){
	Nodo* auxFinal = new Nodo(al, nullptr);

	// No hay ningún nodo
	if(h == nullptr){
		h = auxFinal;
	}
	else{
		// A partir de un nodo
		Nodo* aux = h;
		while(aux->sig  != nullptr){
			aux = aux->sig;
		}
		aux->sig = auxFinal;
	}
}

// Recibir alumno y comparar ambos datos
void Lista::eliminar(Alumno al){

	if(h == nullptr){
		cout << "Lista inexistente" << endl;
	}
	else{
		Nodo* aux = h;
		Nodo* auxAnt = nullptr;
		bool band = true;
		while(aux && band){
			if(aux->chiquillo.nombre == n && aux->chiquillo.edad == e){
				band = false;
			}
			else{
				auxAnt = aux;
				aux = aux->sig;
			}
		}
		if(aux == nullptr){
			cout << "Dato no encontrado" << endl;
		}
		// El nodo a buscar está en el principio
		else if(aux == h){
			h = h->sig;
			delete aux;
		}
		// El nodo está al final (se puede combinar
		// con el de eliminar a la mitad)
		else if(aux->sig == nullptr){
			auxAnt->sig == nullptr;
			delete aux;
		}
		// Si el nodo está a la mitad
		else{
			auxAnt->sig = aux->sig;
			delete aux;
		}
	}
}

void Lista::imprimirTodo(void){
	Nodo* aux = h;

	// Puede representarse como 'aux == nullptr'
	if(!aux){
		cout<< "¡No hay lista!" << endl;
	}
	else{
		// Mientras aux tenga un valor
		while(aux){
			cout << aux->dato.nombre << endl;
			aux = aux->sig;

		}
	}
}

// 
// void Lista::cantidadElementos(void){
// 	Nodo* aux = h;
// 	int cantidad = 0;
// 	if(h == nullptr){
// 		cout << "Lista inexistente" << endl;
// 	}
// 	else{
// 		while(aux != nullptr){
// 			aux = aux->sig;
// 			cantidad++;
// 		}
// 		cout << "Hay " << cantidad << " elemento(s) en la lista" << endl;
// 	}
// }
// 
// 

// void Lista::insertarPosicion(int d){
// 	Nodo* aux = new Nodo(d, nullptr);	 
// 	Nodo* auxAnt = new Nodo(d, nullptr);
// 
// 	if(h == nullptr){
// 		h = aux;
// 	}
// 	else{
// 		bool band = true;
// 		while(aux && band){
// 			if(aux->dato == d){
// 				band = false;
// 			}
// 			else{
// 				auxAnt = aux;
// 				aux = aux->sig;
// 			}
// 		}
// 		if(aux == nullptr){
// 			cout << "Dato no encontrado" << endl;
// 		}
// 		// El nodo a buscar está en el principio
// 		else if(aux == h){
// 			h = h->sig;
// 			delete aux;
// 		}
// 		// El nodo está al final (se puede combinar
// 		// con el de eliminar a la mitad)
// 		else if(aux->sig == nullptr){
// 			auxAnt->sig == nullptr;
// 			delete aux;
// 		}
// 		// Si el nodo está a la mitad
// 		else{
// 			auxAnt->sig = aux->sig;
// 			delete aux;
// 		}
// 	}
// }
