#include "Lista.h"

// Constructor por defecto
Lista::Lista(){
	h = nullptr;
}

Lista::Lista(Nodo* sigPos){
	this->h = sigPos;
}

/*
----- Métodos -----
*/

void Lista::insertarInicio(Alumno al){
	Nodo* aux = new Nodo(al, nullptr);
	
	if(h == nullptr){
		h = aux;
	}
	else{
		aux->sig = h;
		h = aux;
	}
	cout << "Alumno añadido" << endl;
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

// Implementar
void Lista::insertarPos(Alumno al, int d){
	Nodo* aux = new Nodo(al, nullptr);	 
	Nodo* auxAnt = new Nodo(al, nullptr);

//	if(h == nullptr){
//		h = aux;
//	}
//	else{
//		bool band = true;
//		while(aux && band){
//			if(aux->dato == d){
//				band = false;
//			}
//			else{
//				auxAnt = aux;
//				aux = aux->sig;
//			}
//		}
//		if(aux == nullptr){
//			cout << "Dato no encontrado" << endl;
//		}
//		// El nodo a buscar está en el principio
//		else if(aux == h){
//			h = h->sig;
//			delete aux;
//		}
//		// El nodo está al final (se puede combinar
//		// con el de eliminar a la mitad)
//		else if(aux->sig == nullptr){
//			auxAnt->sig == nullptr;
//			delete aux;
//		}
//		// Si el nodo está a la mitad
//		else{
//			auxAnt->sig = aux->sig;
//			delete aux;
//		}
//	}
}

// Recibir alumno y comparar ambos datos
void Lista::eliminar(Alumno al){

	cout << "Impleméntame" << endl;
//	if(h == nullptr){
//		cout << "Lista inexistente" << endl;
//	}
//	else{
//		Nodo* aux = h;
//		Nodo* auxAnt = nullptr;
//		bool band = true;
//		while(aux && band){
//			if(aux->.nombre == n && aux->chiquillo.edad == e){
//				band = false;
//			}
//			else{
//				auxAnt = aux;
//				aux = aux->sig;
//			}
//		}
//		if(aux == nullptr){
//			cout << "Dato no encontrado" << endl;
//		}
//		// El nodo a buscar está en el principio
//		else if(aux == h){
//			h = h->sig;
//			delete aux;
//		}
//		// El nodo está al final (se puede combinar
//		// con el de eliminar a la mitad)
//		else if(aux->sig == nullptr){
//			auxAnt->sig == nullptr;
//			delete aux;
//		}
//		// Si el nodo está a la mitad
//		else{
//			auxAnt->sig = aux->sig;
//			delete aux;
//		}
//	}
}

void Lista::eliminarTodo(void){
	cout << "Impleméntame!" << endl;
}

Nodo* Lista::buscar(Alumno al){
	Nodo* aux = new Nodo(al, nullptr);
	cout << "Impleméntame!" << endl;

	return aux;
}

void Lista::inicializa(void){
	cout << "Impleméntame!" << endl;
}

void Lista::vacia(void){
	if(h == nullptr){
		cout << "La lista está vacía" << endl;
	}
	else{
		cout << "Lista no vacía" << endl;
	}
}

void Lista::primero(void){
	cout << "Impleméntame!" << endl;
}

void Lista::ultimo(void){
	cout << "Impleméntame!" << endl;
}

void Lista::tamaño(void){
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

void Lista::siguiente(Alumno){
	cout << "Impleméntame!" << endl;
}

void Lista::anterior(Alumno){
	cout << "Impleméntame!" << endl;
}

void Lista::mostrarTodo(void){
	Nodo* aux = h;

	// Puede representarse como 'aux == nullptr'
	if(!aux){
		cout<< "¡No hay lista!" << endl;
	}
	else{
		// Mientras aux tenga un valor
		cout << "Número de lista, nombre y edad" << endl;
		int contador = 1;
		while(aux){
			cout << contador << ".- ";
			cout << aux->niño.nombre << ", ";
			cout << aux->niño.edad << endl;
			aux = aux->sig;
			contador++;
		}
	}
}
