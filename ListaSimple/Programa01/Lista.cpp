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
	cout << "Alumno añadido" << endl;
}

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

void Lista::insertarPos(int p, string n, int e){
	Alumno* aux = new Alumno(n, e, nullptr);
	int posicion = p;
	aux = h;

	while(p != posicion){
		previo = aux;
		aux = aux->sig;		
		posicion++;
	}
	aux->sig = previo->sig;	
	previo->sig = aux;
}

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

void Lista::eliminarTodo(void){

}

void Lista::buscar(string n, int e){

}

void Lista::inicializa(void){

}

bool Lista::vacía(void){

	cout << "Impleméntame" << endl;
	return true;
}

void Lista::primero(void){

}

void Lista::ultimo(void){

}

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

void Lista::siguiente(string n, int e){
}

void Lista::anterior(string n, int e){
}

void Lista::mostrarTodo(void){
	Alumno* aux = h;

	// Puede representarse como 'aux == nullptr'
	if(!aux){
		cout<< "¡No hay lista!" << endl;
	}
	else{	
		cout << "Número de lista, nombre, edad" << endl;
		int numl = 1;
		// Mientras aux tenga un valor
		while(aux){
				
			cout << numl << ".- " << aux->nombre << ", " << aux->edad << endl;
			aux = aux->sig;
			numl++;
		}
	}
}

