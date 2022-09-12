#include <iostream>
#include "Lista.h"
#include "Nodo.h"

using namespace std;
void menu(){
	int opc = 0;
	Lista principal;
	while(opc != 8){
		cout << "Lista simple" << endl;
		cout << "1. Añadir al inicio" << endl;
		cout << "2. Imprimir toda la lista" << endl;
		cout << "3. Eliminar el último nodo" << endl;
		cout << "4. Eliminar el primer nodo" << endl;
		cout << "5. Insertar un nodo al final" << endl;
		cout << "6. Mostrar cantidad de elementos" << endl;
		cout << "7. Eliminar nodo determinado" << endl;
		cout << "8. Salir" << endl;
		cout << ": " << endl;
		cin >> opc;
	
		switch(opc){
			// Añadir al inicio
			case 1:
				int valor;
				cout << "Qué valor quieres agregar?" << endl;
				cin >> valor;
				principal.insertarInicio(valor);
				break;

			// Imprimir toda la lista
			case 2:
				imprimirTodo();
				break;
			
			// Eliminar el último nodo
			case 3:
				eliminarFinal();
				break;

			// Eliminar el primer nodo
			case 4:
				eliminarInicio();
				break;
			
			// Insertar al final
			case 5:
				cout << "Qué valor quieres agregar?" << endl;
				cin >> valor;
				principal.insertarFinal(valor);	
				break;

			// Mostrar cantidad de elementos
			case 6:
				cantidadElementos();
				break;

			// Eliminar posición determinada
			case 7:
				cout << "Impleméntame!" << endl;
				break;

			default:
				cout << "Opción inválida" << endl;
		}
	}
}

int main(){
	menu();
	return 0;
}
