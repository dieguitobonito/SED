#include <iostream>
using namespace std;

#include "LinkedList.h"

void menu(){
	cout << "--- Lista doblemente ligada ---\n\n";
	LinkedList ld;

	string menu_name;
	unsigned int menu_age;

	unsigned int option;
	while(option != 10){
		cout << "1.- insertar" << endl;
		cout << "2.- eliminar" << endl;
		cout << "3.- eliminarTodo" << endl;
		cout << "4.- buscar" << endl;
		cout << "5.- inicializa" << endl;
		cout << "6.- vacía" << endl;
		cout << "7.- primero" << endl;
		cout << "8.- ultimo" << endl;
		cout << "9.- tamaño" << endl;
		cout << "10.- siguiente" << endl;
		cout << "11.- anterior" << endl;
		cout << "12.- mostrarTodo (imprimir)" << endl;
		cout << "13.- salir" << endl;
		cout << ": ";
		cin >> option;

		switch(option){
			case 1:{
				cout << "Inserte nombre\n: ";
				cin >> menu_name;
				cout << "Inserte edad\n: ";
				cin >> menu_age;

			}
			case 6:{
				cout << "\n";
				if(ld.isEmpty()){
					cout << "Lista vacía" << endl;
				}else{
					cout << "Lista no vacía" << endl;
				}
				cout << "\n";
				break;
			}
			case 13:{
				cout << "Hasta luego" << endl;
				break;
			}
			default:{
				cout << "Opción inválida" << endl;
			}
		}
	}
}

int main(){
	menu();
	return 0;
}
