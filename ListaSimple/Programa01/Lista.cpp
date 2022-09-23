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

}

// Recibir alumno y comparar ambos datos
void Lista::eliminar(Alumno al){

	if(h == nullptr){
		cout << "Lista inexistente" << endl;
	}
	else{
		Nodo* aux = h;
		Nodo* auxAnt = nullptr;
		// Necesitamos una variable dinámica
		// para borrar correctamente
		Nodo* auxEliminable = new Nodo();

		bool valoresEncontrados = false;

		while(aux && !valoresEncontrados){
			if(aux->niño.nombre == al.nombre && aux->niño.edad == al.edad){
				valoresEncontrados = true;
			}
			else{
				auxAnt = aux;
				aux = aux->sig;
			}
		}
		if(!aux && !valoresEncontrados){
			cout << "No se encontró el alumno" << endl;
		}
		// Está al inicio de la lista
		else if(aux == h){
			auxEliminable = aux;
			h = aux->sig;
			delete auxEliminable;
		}
		// Al final de la lista
		else if(!aux->sig){
			auxEliminable = aux;
			auxAnt->sig = nullptr;
			delete auxEliminable;
		}
		// En medio
		else{
			auxEliminable = aux;
			auxAnt->sig = aux->sig;
			delete auxEliminable;
		}
	}
}

void Lista::eliminarTodo(void){
	if(h == nullptr){
		cout << "No hay lista que eliminar" << endl;
	}
	else{
		Nodo* aux = h;
		Nodo* auxAnt = new Nodo();
		while(aux){
			auxAnt = aux;
			aux = aux->sig;
			delete auxAnt;
		}
		h = nullptr;
		cout << "Lista eliminada" << endl;
	}
}

void Lista::buscar(Alumno al){
	Nodo* comp = new Nodo(al, nullptr);
	Nodo* aux = h;
	bool encontrado = false;	

	if(h == nullptr){
		cout << "¡No hay lista por la cual buscar!" << endl;
	}
	else{
		while(aux && !encontrado){
			if(aux->niño.nombre == comp->niño.nombre && aux->niño.edad == comp->niño.edad){
				encontrado = true;
			}
			aux = aux->sig;
		}
		if(aux && encontrado){
			cout << "Alumno encontrado en dirección: " << aux << endl;
		}
		else{
			cout << "Alumno no encontrado" << endl;
		}
	}
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
		while(aux != nullptr){
			cout << contador << ".- ";
			cout << aux->niño.nombre << ", ";
			cout << aux->niño.edad << endl;
			aux = aux->sig;
			contador++;
		}
	}
}
