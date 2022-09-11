#include <iostream>

#include "Lista.h"
#include "Nodo.h"

using namespace std;

void menu(){
	int opc = 0;
	Lista principal;
	while(opc != 10){
		cout << "Lista simple" << endl;
		cout << "1. Añadir al inicio" << endl;
		cout << "2. Mostrar" << endl;
		cout << "3. Añadir al final" << endl;
		cout << "4. Eliminar" << endl;
		cout << "5. Añadir en posición" << endl;
		
		cout << ": " << endl;
		cin >> opc;
	
		switch(opc){
			// Añadir al inicio
			case 1:
				int valor;
				principal.imprimirTodo();
				cout << "Qué valor quieres agregar?" << endl;
				cin >> valor;
				principal.insertarInicio(valor);
			case 2:
				cout << "Hola, cómo estás" << endl;
	
		}
	}
}

int main(){
	Lista prueba;
	prueba.imprimirTodo();
	prueba.insertarInicio(9);
	prueba.insertarInicio(123);
	prueba.insertarInicio(999);
	prueba.imprimirTodo();
	prueba.eliminarFinal();
	prueba.imprimirTodo();
	return 0;
}
