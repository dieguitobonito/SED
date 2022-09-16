#include "Lista.h"

// Constructor por defecto
Lista::Lista(){
	h = nullptr;
}

// Constructor por parámetros
Lista::Lista(Alumno* sigPos){
	this->h = sigPos;
}

// 1
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

// 2
void Lista::insertarFinal(string n, int e){
	Alumno* auxFinal = new Alumno(n, e, nullptr);

	// No hay ningún nodo
	if(h == nullptr){
		h = auxFinal;
	}
	else{
		// A partir de un nodo
		Alumno* aux = h;
		while(aux->sig != nullptr){
			aux = aux->sig;
		}
		aux->sig = auxFinal;
	}
}

// 3
void Lista::insertarPos(int p, string n, int e){
	cout << "Impleméntame" << endl;

}
// 4
void Lista::eliminar(string n, int e){

	if(h == nullptr){
		cout << "Lista inexistente" << endl;
	}
	else{
		Alumno* aux = h;
		Alumno* auxAnt = nullptr;
		bool band = true;
		while(aux && band){
			if(aux->edad == e){
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

// 5
void Lista::eliminarTodo(void){

}

// 6
void Lista::buscar(string n, int e){

}

// 7
void Lista::inicializa(void){

}

// 8
bool Lista::vacía(void){

	cout << "Impleméntame" << endl;
	return true;
}

// 9
void Lista::primero(void){

}

// 10
void Lista::ultimo(void){

}

// 11
int Lista::tamaño(void){
	Alumno* aux = h;
	int cantidad = 0;
	if(h == nullptr){
		cout << "Lista inexistente" << endl;
	}
	else{
		while(aux != nullptr){
			aux = aux->sig;
			cantidad++;
		}
		return cantidad;
	}
	return cantidad;
}

// 12
void Lista::siguiente(string n, int e){
}

// 13
void Lista::anterior(string n, int e){
}

// 14
void Lista::mostrarTodo(void){
	Alumno* aux = h;

	// Puede representarse como 'aux == nullptr'
	if(!aux){
		cout<< "¡No hay lista!" << endl;
	}
	else{
		// Mientras aux tenga un valor
		while(aux){
			cout << "Nombre y edad" << endl;
			cout << aux->nombre << ", " << aux->edad << endl;
			aux = aux->sig;
		}
	}
}
