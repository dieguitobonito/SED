#include <iostream>
#include "Lista.h"
#include "Nodo.h"

#include <string>

using namespace std;
void menu(){
	cout << "--- Lista escolar ---" << endl;
	int opc = 0;
	int valor;
	Lista principal;

	// Necesitas crearla una vez todos los datos estén juntos
	//Alumno niño;
	
	string name;
	int age;
	while(opc != 14){
		cout << "\n1. Añadir al inicio" << endl;
		cout << "2. Insertar al final" << endl;
		cout << "3. Insertar en posición" << endl;
		cout << "4. Eliminar" << endl;
		cout << "5. Buscar" << endl;
		cout << "6. Inicializar" << endl;
		cout << "7. Verificar si está vacía" << endl;
		cout << "8. Imprimir el primer alumno" << endl;
		cout << "9. Imprimir el último alumno" << endl;
		cout << "10. Tamaño de la lista" << endl;
		cout << "11. Imprimir el siguiente alumno" << endl;
		cout << "12. Imprimir el alumno anterior" << endl;
		cout << "13. Mostrar toda la lista" << endl;
		cout << "14. Salir" << endl;
		cout << ": ";
		cin >> opc;
		cout << endl;
	
		switch(opc){
			// Añadir al inicio
			case 1:{

				cout << "¿Cómo se llama el alumno?\n: ";
				cin >> name;
				cout << "¿Cuántos años tiene?\n: ";
				cin >> age;

				// Llamando al constructor a la hora de crear la variable, todo de golpe
				Alumno niño(name, age);	
				// Recibe alumno, no nodo
				principal.insertarInicio(niño);
			}
				break;
			// Añadir al final
			case 2:{	
				cout << "¿Cómo se llama el alumno?\n: ";
				cin >> name;
				cout << "¿Cuántos años tiene?\n: ";
				cin >> age;

				Alumno niño(name, age);
				principal.insertarFinal(niño);

			}

			case 13:{
				principal.imprimirTodo();
			}
				break;
			// Salir
			case 14:{
				opc = 8;
			}
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
