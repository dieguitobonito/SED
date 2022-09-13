#include <iostream>
#include "Lista.h"
#include "Nodo.h"

using namespace std;
void menu(){
	cout << "--- Lista simple ---" << endl;
	int opc = 0;
	int valor;
	Lista principal;
	while(opc != 8){
		cout << "\n1. Añadir al inicio" << endl;
		cout << "2. Añadir al final" << endl;
		cout << "3. Eliminar un nodo" << endl;
		cout << "4. Mostrar cantidad de elementos" << endl;
		cout << "5. Imprimir toda la lista" << endl;
		cout << "6. Salir" << endl;
		cout << ": ";
		cin >> opc;
		cout << endl;
	
		switch(opc){
			// Añadir al inicio
			case 1:
				cout << "¿Qué valor quieres agregar?\n: ";
				cin >> valor;
				principal.insertarInicio(valor);
				break;

			// Añadir al final 
			case 2:
				cout << "¿Qué valor quieres ingresar?\n: ";
				cin >> valor;
				principal.insertarFinal(valor);
				break;
			// Eliminar un nodo
			case 3:
				cout << "¿Qué valor quieres eliminar?\n: ";
				cin >> valor;
				principal.eliminar(valor);
				break;
			// Mostrar cantidad de elementos
			case 4:
				principal.cantidadElementos();
				break;

			// Imprimir toda la lista
			case 5:
				principal.imprimirTodo();
				break;
			// Salir
			case 6:
				opc = 8;
				break;
			default:
				cout << "Opción no válida" << endl;
		}
	}
}

int main(){
	menu();
	return 0;
}
