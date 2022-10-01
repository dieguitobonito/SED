#include <iostream>
using namespace std;

#include <string>
#include "ListaDoble.h"


void menu(void){
	unsigned int opc = 0;
	string n;
	unsigned int e;
	unsigned int pos;
	ListaDoble salonA;

	while(opc != 13){
		cout << "1. Insertar" << endl;
		cout << "2. Eliminar" << endl;
		cout << "3. EliminarTodo" << endl;
		cout << "4. Buscar" << endl;
		cout << "5. Inicializar" << endl;
		cout << "6. Vacía" << endl;
		cout << "7. Primero" << endl;
		cout << "8. Último" << endl;
		cout << "9. Tamaño" << endl;
		cout << "10. Siguiente" << endl;
		cout << "11. Anterior" << endl;
		cout << "12. Mostrar todo (imprimir)" << endl;
		cout << "13. Salir" << endl;
		cout << ": ";
		cin >> opc;

		switch(opc){
			// insertar
			case 1:{
				salonA.mostrarTodo();
				cout << "En qué posición quieres insertar" << endl;
				cin >> pos;
				if(pos > 0 && pos <= salonA.tamaño()){
					cout << "Nombre\n: " << endl;
					cin >> n;
					cout << "Edad\n: " << endl;
					cin >> e;
					Alumno kid(n, e);
					salonA.insertar(kid, pos);
					cout << "Alumno insertado" << endl;
				}
				else{
					cout << "Posición fuera de rango" << endl;
				}
				break;
			}
			// eliminar
			case 2:{
				break;
			}
			// eliminarTodo
			case 3:{
				break;
			}
			// buscar
			case 4:{
				break;
			}
			// inicializa
			case 5:{
				salonA.inicializa();
				break;
			}
			// vacía
			case 6:{
				break;
			}
			// primero
			case 7:{
				break;
			}
			// ultimo
			case 8:{
				break;
			}
			// tamaño
			case 9:{
				break;
			}
			// siguiente
			case 10:{
				break;
			}
			// anterior
			case 11:{
				break;
			}
			// mostrarTodo (imprimir)
			case 12:{
				salonA.mostrarTodo();
				break;
			}
			// salir
			case 13:
				cout << "Hasta luego!" << endl;
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
