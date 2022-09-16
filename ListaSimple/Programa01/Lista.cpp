#include "Lista.h"

// Constructor por defecto
Lista::Lista(){
	h = nullptr;
}

// Constructor por parámetros
Lista::Lista(Nodo* sigPos){
	this->h = sigPos;
}

void Lista::insertarInicio(string n, int e){
	Alumno* aux = new Alumno(n, e, nullptr);
	
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
		cout<< "¡No hay lista!" << endl;
	}
	else{
		// Mientras aux tenga un valor
		while(aux){
			cout << aux->dato << endl;
			aux = aux->sig;

		}
	}
}

// void Lista::eliminarFinal(void){	
// 	Nodo* aux = h;	
// 	
// 	// No hay lista
// 	// Si se eliminan todos los nodos no aparecerá el mensaje hasta una segunda vez
// 	if(h == nullptr){
// 		cout << "Lista inexistente" << endl;
// 	}
// 	else{
// 		// Que solo exista un nodo en la lista
// 		// (Da segfault si solo se crea un nodo y se imprime todo)
// 		if(aux->sig == nullptr){
// 			aux = h;
// 			h = nullptr;
// 			delete aux;
// 		}
// 		else{
// 			// Como su nombre lo indica, guardará la dirección del nodo anterior
// 			Nodo* auxAnt = aux;
// 			// Irá guardando la posición previa hasta
// 			// que se encuentre el último nodo
// 			while(aux->sig != nullptr){
// 				auxAnt = aux;		
// 				aux = aux->sig;
// 			}
// 			auxAnt->sig = nullptr;
// 			delete aux;
// 		}
// 	}
// }


// void Lista::eliminarInicio(void){
// 	if(h == nullptr){
// 		cout << "Lista inexistente!" << endl;
// 	}
// 	else{
// 		Nodo* aux = h;
// 		h = aux->sig;
// 		delete aux;
// 	}
// }

void Lista::insertarFinal(int d){
	Nodo* auxFinal = new Nodo(d, nullptr);

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

void Lista::cantidadElementos(void){
	Nodo* aux = h;
	int cantidad = 0;
	if(h == nullptr){
		cout << "Lista inexistente" << endl;
	}
	else{
		while(aux != nullptr){
			aux = aux->sig;
			cantidad++;
		}
		cout << "Hay " << cantidad << " elemento(s) en la lista" << endl;
	}
}

void Lista::eliminar(int d){

	if(h == nullptr){
		cout << "Lista inexistente" << endl;
	}
	else{
		Nodo* aux = h;
		Nodo* auxAnt = nullptr;
		bool band = true;
		while(aux && band){
			if(aux->dato == d){
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
