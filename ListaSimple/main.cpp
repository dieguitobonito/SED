#include <iostream>

using namespace std;

int main(){
	int opc = 0 ;
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
				cout << "Qué valor quieres agregar?" << endl;
				cin >> valor;
			case 2:
				cout << "Hola, cómo estás" << endl;

		}
	}
	return 0;
}
